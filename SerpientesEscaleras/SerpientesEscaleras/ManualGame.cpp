//
//  ManualGame.cpp
//  Oscar Miranda Escalante A01630791
//

#include "ManualGame.hpp"

ManualGame::ManualGame() : MyGame() {}

ManualGame::ManualGame(int tiles, int snakes, int ladders, int penalty, int reward, int players, int turnLimit)
: MyGame(tiles, snakes, ladders, penalty, reward, players, turnLimit) {}

void ManualGame::start() {
    this->board->print();
    puts("Press C to continue next turn, or E to end the game");
    char cont = 'C';
    bool badChoice = false;
    bool exit = false;
   
    auto it = this->players.begin();
    
    while (cont == 'C') {
        for (int i = 0; i < 5; ++i) {
            try {
                std::cin >> cont;
                if (cont == 'C') {
                    badChoice = false;
                    break;
                } else if (cont == 'E') {
                    badChoice = false;
                    exit = true;
                    break;
                } else {
                    throw InvalidOptionException();
                }
            } catch (InvalidOptionException& ioe){
                std::cerr << ioe.what() << std::endl;
                badChoice = true;
            }
        }
        if (!badChoice && !exit) {
            if (go(*it)) { // go devuelve true si ganó el jugador it
                break;
            }
            if (turn > turnLimit) {
                break;
            }
            if (it == this->players.end()-1) {
                it = this->players.begin();
            } else {
                ++it;
            }
        }
    }
    
    std::puts("-- GAME OVER --");
    
    if (exit) {
        std::puts("Thanks for playing!!!");
    } else if (badChoice) {
        std::puts("Invalid menu choice exceeded");
    }else if (turn <= turnLimit) {
        printf("Player %d is the winner!!!\n", this->winner->getID());
    } else {
        std::puts("The maximum number of turns has been reached.");
    }
}
