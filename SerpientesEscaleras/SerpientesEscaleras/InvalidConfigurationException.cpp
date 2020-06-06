//
//  InvalidConfigurationException.cpp
//  Oscar Miranda Escalante A01630791
//

#include "InvalidConfigurationException.hpp"

InvalidConfigurationException::InvalidConfigurationException() : std::exception() {
    this->message = "Invalid input. Wrong number of arguments.";
}

InvalidConfigurationException::InvalidConfigurationException(string param_name, int param_value) : std::exception() {
    this->message = "Invalid " + param_name + " value " + std::to_string(param_value);
}

InvalidConfigurationException::InvalidConfigurationException(string param_name, string param_value) : std::exception() {
    this->message = "Invalid " + param_name + " value " + param_value;
}

const char * InvalidConfigurationException::what() const noexcept {
    return this->message.c_str();
}
