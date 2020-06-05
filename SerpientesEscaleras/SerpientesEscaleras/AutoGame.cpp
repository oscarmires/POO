//
//  AutoGame.cpp
//  Oscar Miranda Escalante A01630791
//

#include "AutoGame.hpp"

AutoGame::AutoGame() : MyGame() {}

AutoGame::AutoGame(int tiles, int snakes, int ladders, int penalty, int reward, int players, int turnLimit)
: MyGame(tiles, snakes, ladders, penalty, reward, players, turnLimit) {}

void AutoGame::start() {
    this->board->print();
    puts("Auto game: ");
    
    auto it = this->players.begin();
    for (int i = 0; i < turnLimit; ++i) {
        if (go(*it)) {
            break;
        }
        if (it == this->players.end()-1) {
            it = this->players.begin();
        } else {
            ++it;
        }
    }
    
    std::puts("-- GAME OVER --");
    if (turn <= turnLimit) {
        printf("Player %d is the winner!!!\n", this->winner->getID());
    } else {
        std::puts("The maximum number of turns has been reached.");
    }
}
