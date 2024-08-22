# Dragonhorse
A free and open-source UCI chess engine (AI player).
Dragonhorse is derived from Manik Charan's Teki GitHub repository.

To build from source on Linux (starting from src/):

`make ENGINE_NAME="Dragonhorse <version>" -j<cores>`

To build from source on Windows

Build using MinGW:
```
make
```

Build using CMake:
```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release -DEXEC_NAME="\"Dragonhorse <version>\"" ..
make
```
