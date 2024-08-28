`conanfile.txt` is an easy way to consume a package. Creation of a package is not supported.

1) `conan install . --output-folder=build --build=missing`
2) `cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release`