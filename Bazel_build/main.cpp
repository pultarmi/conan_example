#include <nlohmann/json.hpp>
#include <iostream>

int main() {
    std::string json_string = R"({
        "name": "John Doe",
        "skills": ["C++", "Python", "Conan"]
    })";

    nlohmann::json json_data = nlohmann::json::parse(json_string);

    std::cout << "Name: " << json_data["name"] << "\n";
    std::cout << "Skills: ";
    for (const auto& skill : json_data["skills"])
        std::cout << skill << " ";
    std::cout << "\n";

    return 0;
}
