//
//  ManualGame.hpp
//  Oscar Miranda Escalante A01630791
//

#ifndef ManualGame_hpp
#define ManualGame_hpp

#include "MyGame.hpp"
#include "InvalidOptionException.hpp"

class ManualGame : protected MyGame {
public:
    ManualGame();
    ManualGame(int, int, int, int, int, int, int);
    virtual void start();
};

#endif /* ManualGame_hpp */
