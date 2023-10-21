#!/bin/bash
wget -P /tmp https://github.com/ophiliatex/alx-low_level_programming/raw/master/0x18-dynamic_libraries/hwin.so
export LD_PRELOAD=/tmp/hwin.so
