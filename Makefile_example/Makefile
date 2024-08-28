# Project name
TARGET = conan_json_example

# Source files
SRCS = main.cpp

CXX = $(CC)  # Use the compiler specified by Conan

# Compilation flags
CXXFLAGS = $(CONAN_CXXFLAGS) -std=c++20 -Ifull_deploy/host/nlohmann_json/3.11.3/include
LDFLAGS = $(CONAN_LDFLAGS)
INCLUDES = $(CONAN_INCLUDES)

# Libraries
LIBS = $(CONAN_LIBS)

all: $(TARGET)

# Build the executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRCS) -o $(TARGET) $(LDFLAGS) $(LIBS)

# Clean the build
clean:
	rm -f $(TARGET)
