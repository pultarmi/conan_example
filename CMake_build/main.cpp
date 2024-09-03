// main.cpp
#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

int main() {
    // A sample JSON string
    std::string json_string = R"({
        "name": "John Doe",
        "skills": ["C++", "Python", "Conan"]
    })";

    // Parse the JSON string into a json object
    nlohmann::json json_data = nlohmann::json::parse(json_string);

    // Output the parsed data
    std::cout << "Name: " << json_data["name"] << "\n";
    std::cout << "Skills: ";
    for (const auto& skill : json_data["skills"])
        std::cout << skill << " ";
    std::cout << "\n";

    return 0;
}
