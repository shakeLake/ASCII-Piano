#!/bin/bash
cd build
cmake -G "Unix Makefiles" -S "..\src"
make
./letGo.exe
cd ..