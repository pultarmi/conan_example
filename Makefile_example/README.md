###

There is currently no MakeToolchain in Conan, but it will be [added in the future](https://docs.conan.io/2/integrations/makefile.html)

For now, the simplest way is doing this:
1) `conan install --requires=nlohmann_json/3.11.3@ -b=missing --deployer=full_deploy`

[//]: # (install path: full_deploy/host/nlohmann_json/3.11.3/include)