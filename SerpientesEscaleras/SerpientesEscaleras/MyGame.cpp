//
//  MyGame.cpp
//  Oscar Miranda Escalante A01630791
//

#include "MyGame.hpp"
#include <iostream>

MyGame::MyGame(int tiles, int snakes, int ladders, int penalty, int reward, int players, int turnLimit) {
    this->board = new Board(tiles, snakes, ladders, penalty, reward);
    this->turn = 1;
    this->turnLimit = turnLimit;
    for (int i = 0; i < players; ++i) {
        this->players.push_back(new Player(i+1));
    }
}

bool MyGame::go(Player * pl) {
    // registar posición actual
    int prevPos = pl->getPosition();
    // mover jugador y registrar nueva posición
    int diceVal = this->dice.roll();
    int playerPos = pl->changePosition(diceVal);
    // registrar tipo de casilla donde cae
    char firstResultType = this->board->getTile(playerPos-1).getType();
    // mover según reward o penalty
    playerPos = pl->changePosition(board->getTile(playerPos-1).getMove());
    // caso ganador - imprimir (turno, jugador, casilla, numdado, tipo, posfinal)
    if (playerPos >= this->board->size()) {
        printf("%d %d %d %d N >=%d\n", turn, pl->getID(), prevPos, diceVal, this->board->size());
        this->winner = pl;
        return true;
    }
    // imprimir datos (turno, jugador, casilla, numdado, tipo, posfinal)
    printf("%d %d %d %d %c %d\n", turn, pl->getID(), prevPos, diceVal, firstResultType, playerPos);
    ++this->turn;
    return false;
}

void MyGame::start() {}


