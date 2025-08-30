mkdir build
cd build
cmake .. -G "MinGW Makefiles"
cmake --build . --parallel 2 --config Release
