//
//  AutoGame.hpp
//  Oscar Miranda Escalante A01630791
//

#ifndef AutoGame_hpp
#define AutoGame_hpp

#include "MyGame.hpp"

class AutoGame : protected MyGame {
public:
    AutoGame();
    AutoGame(int, int, int, int, int, int, int);
    virtual void start();
};

#endif /* AutoGame_hpp */
