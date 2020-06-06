//
//  InvalidOptionException.hpp
//  Oscar Miranda Escalante A01630791
//

#ifndef InvalidOptionException_hpp
#define InvalidOptionException_hpp

#include <string>
#include <exception>
using std::string;

class InvalidOptionException : public std::exception {
public:
    InvalidOptionException();
    virtual const char* what() const noexcept;
};

#endif /* InvalidOptionException_hpp */
