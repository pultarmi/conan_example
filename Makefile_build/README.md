### Makefile example.

There is yet [no MakeToolchain in Conan](https://docs.conan.io/2/integrations/makefile.html), hence this approach is more "manual" than usual, but still straightforward.

For now, the simplest way of consuming a package is this:
```bash
# install the dependencies
conan install --requires=nlohmann_json/3.11.3@ -b=missing --deployer=full_deploy

# install path of json is full_deploy/host/nlohmann_json/3.11.3/include
# Makefile is already adjusted to include this path

# now build the project
make -j
```
