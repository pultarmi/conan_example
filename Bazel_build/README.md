### CMake example

Using `conanfile.txt` is the preferred way of consuming a package.

```bash
# install conan dependencies and build if any necessary
conan install . --build=missing

# build the project in Release mode.
bazel --bazelrc=./conan/conan_bzl.rc build --config=conan-config //:example
```