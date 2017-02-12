# snowboy-cwrapper
A C ABI wrapper for the Snowboy hotword detection library

While developing a personal project in Rust, I found it necessary to create a C ABI wrapper for the C++ [Snowboy hotword detection library](https://github.com/Kitt-AI/snowboy "Snowboy hotword detection library"). This should allow Rust to call into Snowboy's functionality through its FFI, allowing the library to be used in Rust projects (or any other languages with FFIs supporting C's calling conventions)

## Building
The only thing that you need to include while building is an appropriate version of the libsnowboy library [from the main Snowboy repository](https://github.com/Kitt-AI/snowboy/tree/master/lib "from the main Snowboy repository"). At the time of writing, Snowboy has precompiled binaries for ARMv7a, iOS, OSX, RPI, and Ubuntu/Debian x64. The internals of the library are also proprietary at this time, so support for additional platforms can only be added at the discretion of (the project maintainer)[https://github.com/chenguoguo "the project maintainer"].
