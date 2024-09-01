### CMake example

Using `conanfile.txt` is the preferred way of consuming a package.

```bash
# install conan dependencies and build if any necessary
conan install . --output-folder=build --build=missing

cd build

# build the project in Release mode. CMake toolchain file was generated in previous step
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
```