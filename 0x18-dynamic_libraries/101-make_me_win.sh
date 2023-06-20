#!/bin/bash

wget -P /tmp https://github.com/equationcode/alx-low_level_programming/raw/main/0x18-dynamic_libraries/test.so
export LD_PRELOAD=/tmp/test.so
