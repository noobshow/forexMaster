#!/bin/sh

swig -I../C++ -DALIGN_DECL_DEFAULT -DHEAVYUSE -DPURE_DECL -threads -python -c++ -o QuickfixPython.cpp quickfix.i
cat quickfix_fields.py >> quickfix.py
sed -i "s/object.__getattr__/object.__getattribute__/g" quickfix.py
