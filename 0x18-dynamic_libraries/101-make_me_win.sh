#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Varane1999/alx-low_level_programming/master/0x18-dynamic_libraries/libbooya.so
export LD_PRELOAD="$PWD/../libbooya.so"
