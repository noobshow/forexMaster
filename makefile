BUILD_DIR = build

SRCS_DIR = src

CXX = g++-8
DEBFLAGS = -fsanitize=undefined -O0 -fsanitize=address
CXXFLAGS = -std=c++17 -Wall -Wshadow -Wfatal-errors
INCLUDE_FLAGS = -I./libs -I./src
LD_FLAGS = -lpthread -lstdc++fs
SRCS = $(shell find $(SRCS_DIR) -name '*.cpp' -or -name '*.c')
OBJS = $(SRCS:%=$(BUILD_DIR)/%.o)

-include $(shell find $(BUILD_DIR) -name '*.d')

$(BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) -c $< -o $@ -MMD $(CXXFLAGS) $(INCLUDE_FLAGS) $(LD_FLAGS)

release: $(OBJS)
	$(CXX) $(OBJS) -o main $(CXXFLAGS) $(LD_FLAGS) -O3 -flto

debug: $(OBJS)
	$(CXX) $(OBJS) -o main $(CXXFLAGS) $(LD_FLAGS) $(DEBFLAGS)

clean:
	find $(BUILD_DIR) -name "*.o" -delete && find $(BUILD_DIR) -name "*.d" -delete

