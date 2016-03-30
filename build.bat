::build

rd /S/Q build Bin
md build
cd build
cmake ../ -G "Visual Studio 12 2013"

pause