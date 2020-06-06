//
//  InvalidOptionException.cpp
//  Oscar Miranda Escalante A01630791
//

#include "InvalidOptionException.hpp"

InvalidOptionException::InvalidOptionException() : std::exception() {}

const char * InvalidOptionException::what() const noexcept {
    return "Invalid option, please press C to continue next turn or E to end the game.";
}
