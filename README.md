# gnutest
Test _GNU_SOURCE

This project only compiles when `_GNU_SOURCE` is enabled in `CMakeLists.txt`.

Useful to check if the clang model in qtcreator picks up flags from cmake.

Tested to work with:
```
clang version 5.0.2 (tags/RELEASE_502/final)
Target: x86_64-unknown-linux-gnu

Qt Creator 4.6.2
ClangCodeModel 4.6.2
ClangStaticAnalyzer 4.6.2
```



