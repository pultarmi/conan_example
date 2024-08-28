// main.cpp
#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

int main() {
    // A sample JSON string
    std::string json_string = R"({
        "name": "John Doe",
        "age": 30,
        "is_student": false,
        "skills": ["C++", "Python", "Conan"]
    })";

    // Parse the JSON string into a json object
    nlohmann::json json_data = nlohmann::json::parse(json_string);

    // Accessing data
    std::string name = json_data["name"];
    int age = json_data["age"];
    bool is_student = json_data["is_student"];
    std::vector<std::string> skills = json_data["skills"];

    // Output the parsed data
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Is student: " << (is_student ? "Yes" : "No") << "\n";
    std::cout << "Skills: ";
    for (const auto& skill : skills) {
        std::cout << skill << " ";
    }
    std::cout << "\n";

    return 0;
}

