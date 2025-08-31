from conan import ConanFile
from conan.tools.cmake import cmake_layout

class CMakeSample(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"
    build_policy = "missing"
    requires = "opencv/4.12.0"
    options = {
        "shared": [True, False]
    }
    default_options = {
        "shared": False
    }

    def layout(self):
        cmake_layout(self)

    def configure(self):
        if "shared" in self.options:
            self.options["opencv/*"].shared = self.options.shared

