#!/bin/bash
wget -P /tmp https://github.com/badreaz/alx-low_level_programming/raw/master/0x18-dynamic_libraries/print.so
export LD_PRELOAD=/tmp/print.so
