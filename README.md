# snowboy-cwrapper
A C ABI wrapper for the Snowboy hotword detection library

While developing a personal project in Rust, I found it necessary to create a C ABI wrapper for the C++ [Snowboy hotword detection library](https://github.com/Kitt-AI/snowboy "Snowboy hotword detection library"). This should allow Rust to call into Snowboy's functionality through its FFI, allowing the library to be used in Rust projects (or any other languages with FFIs supporting C's calling conventions)

## Why is this necessary?
[SWIG](http://www.swig.org/ "SWIG"), the tool used by the Snowboy project to produce library bindings for other languages, does not currently support producing C bindings for C++ libraries. As it stands, creating a manual wrapper in this manner is the only way of providing an appropriate interface to call into from FFIs supporting C ABI-compatible functions.

## Building
The only thing that you need to include while building is an appropriate version of the libsnowboy library [from the main Snowboy repository](https://github.com/Kitt-AI/snowboy/tree/master/lib "from the main Snowboy repository") to replace the _libsnowboy.a_ file in this project's _snowboy_ directory. At the time of writing, Snowboy has precompiled binaries for ARMv7a, iOS, OSX, RPI, and Ubuntu/Debian x64. The internals of the library are also proprietary at this time, so support for additional platforms can only be added at the discretion of (the project maintainer)[https://github.com/chenguoguo "the project maintainer"].
