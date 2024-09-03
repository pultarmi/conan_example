from conan import ConanFile
from conan.tools.cmake import CMakeToolchain, CMakeDeps, CMake

class ConanJsonExample(ConanFile):
    name = "conan_json_example"
    version = "1.0"
    requires = "nlohmann_json/3.11.3"
    generators = "CMakeToolchain", "CMakeDeps"
    default_options = {}

    def layout(self):
        self.folders.build = "build"
        self.folders.source = "src"
        self.folders.generators = "build/generators"

    def generate(self):
        tc = CMakeToolchain(self)
        tc.generate()

        deps = CMakeDeps(self)
        deps.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()

    def package_info(self):
        self.cpp_info.libs = ["conan_json_example"]
