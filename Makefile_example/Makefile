# Project name
TARGET = conan_json_example

SRCS = main.cpp

CXX = g++

# Compilation flags
CXXFLAGS = -std=c++20 -Ifull_deploy/host/nlohmann_json/3.11.3/include

# Libraries
LIBS = $(CONAN_LIBS) # noc necessary, but a good practice

all: $(TARGET)

# Build the executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRCS) -o $(TARGET) $(LIBS)

# Clean the build
clean:
	rm -f $(TARGET)
