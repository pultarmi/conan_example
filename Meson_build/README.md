### Meson example

```bash
# install conan dependencies and build if any necessary
conan install . --output-folder=build --build=missing

cd build

meson setup --native-file conan_meson_native.ini .. meson-src
meson compile -C meson-src
```