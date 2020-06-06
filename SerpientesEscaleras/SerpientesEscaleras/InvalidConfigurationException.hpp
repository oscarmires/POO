//
//  InvalidConfigurationException.hpp
//  Oscar Miranda Escalante A01630791
//

#ifndef InvalidConfigurationException_hpp
#define InvalidConfigurationException_hpp

#include <string>
#include <exception>
using std::string;

class InvalidConfigurationException : public std::exception {
private:
    string message;
public:
    InvalidConfigurationException();
    InvalidConfigurationException(string, int);
    InvalidConfigurationException(string, string);
    virtual const char* what() const noexcept;
};

#endif /* InvalidConfigurationException_hpp */
