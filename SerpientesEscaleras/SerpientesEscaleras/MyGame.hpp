//
//  MyGame.hpp
//  Oscar Miranda Escalante A01630791
//

#ifndef MyGame_hpp
#define MyGame_hpp

#include "Player.hpp"
#include "Board.hpp"
#include "Dice.hpp"
#include <iostream>
#include <vector>

class MyGame {
protected:
    Board* board;
    std::vector<Player*> players;
    Player* winner;
    Dice dice;
    int turn;
    int turnLimit;
public:
    // tiles, snakes, ladders, penalty, reward, turnLimit)
    MyGame(int = 30, int = 3, int = 3, int = -3, int = 3, int = 2, int = 20);
    bool go(Player*);
    virtual void start();
};

#endif /* MyGame_hpp */
