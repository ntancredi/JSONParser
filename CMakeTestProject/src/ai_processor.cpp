// ai_processor.cpp
#include <iostream>
#include <string>
#include "json.hpp" // Include the nlohmann/json library

using json = nlohmann::json;
using namespace std;

class AIProcessor {
public:
    static string processCharacterData(const string& data) {
        try {
            auto j = json::parse(data);
            j["processed"] = true;
            return j.dump(4);
        }
        catch (json::parse_error& e) {
            return "Invalid JSON data";
        }
    }
};