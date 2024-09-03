TARGET = conan_json_example

SRCS = main.cpp

CXX = g++
CXXFLAGS = -std=c++20 -Ifull_deploy/host/nlohmann_json/3.11.3/include

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET) $(CONAN_LIBS)

clean:
	rm -f $(TARGET)
