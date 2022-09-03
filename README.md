# Simple C++ Template Project

This project is created for my personal use, but someone might find it useful as starting a new C++/CMake project from scratch is always a bit annoying.

Just clone the repository and modify the CMake project files and application code for your own use.

"Features":

* C++17
* CMake
* ClangFormat (`.clang-format` configuration file)
* Code
  * main.cpp
  * application.hpp / application.cpp
  * Simple argument parsing with a placeholder help

## Build (Linux)

```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

## Run

Application that does nothing:

```
$ ./simplecplusplustemplate
```

Placeholder help:

```
$ ./simplecplusplustemplate -h
```

## License

MIT
