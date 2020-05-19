#pragma once
#include <map>
#include <string>

std::string calculate(const std::string &command, int first, int second)
{
    std::map<std::string, int> options{{"add", 0}, {"subtract", 1}, {"multiply", 2}, {"divide", 3}};
    if (options.find(command) == options.end()) {
        return "Invalid data";
    }
    switch (options[command]) {
    case 0: {
        return std::to_string(first + second);
    } break;
    case 1: {
        return std::to_string(first - second);
    } break;
    case 2: {
        return std::to_string(first * second);
    } break;
    case 3: {
        return (second != 0) ? std::to_string(first / second) : "Division by 0";
    } break;
    }
    return "";
}
