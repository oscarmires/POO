//
//  MyGame.cpp
//  Oscar Miranda Escalante A01630791
//

#ifndef MyGame_hpp
#define MyGame_hpp

#include "Player.hpp"
#include "Board.hpp"
#include "Dice.hpp"

class MyGame {
private:
    Board board;
    Player player1;
    Player player2;
    Dice dice;
    int turn;
    int turnLimit;
    Player* currentPlayer;
public:
    MyGame();
    void nextTurn();
    void start();
};

#endif /* MyGame_hpp */
