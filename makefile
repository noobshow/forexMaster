BUILD_DIR = build

SRCS_DIR = src

CXXFLAGS = -std=c++17 -Wall -Wshadow
INCLUDE_FLAGS = -I./libs 
LD_FLAGS = -lpthread -lpthread
SRCS = $(shell find $(SRCS_DIR) -name '*.cpp' -or -name '*.c')
OBJS = $(SRCS:%=$(BUILD_DIR)/%.o)

-include $(shell find $(BUILD_DIR) -name '*.d')

$(BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	g++ -c $< -o $@ -MMD $(CXXFLAGS) $(INCLUDE_FLAGS) $(LD_FLAGS)

main: $(OBJS)
	g++ $(OBJS) -o main $(CXXFLAGS) $(LD_FLAGS)

test: main
	./main

fixGen: fixGen/fixGen.cpp
	g++ fixGen/fixGen.cpp -o fixGen/fixGen $(CXXFLAGS)

fixGenRun: fixGen/fixGen.cpp
	g++ fixGen/fixGen.cpp -o fixGen/fixGen $(CXXFLAGS)
	./fixGen/fixGen


clean:
	find $(BUILD_DIR) -name "*.o" -delete && find $(BUILD_DIR) -name "*.d" -delete

