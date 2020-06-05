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
    char cont;
    
    auto it = this->players.begin();
    
    do {
        std::cin >> cont;
        if (cont != 'E' && cont != 'C') {
            std::cout << "Invalid option, please press C to continue next turn "
            "or E to end the game" << std::endl;
            cont = 'C';
            continue;
        }
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
    } while (cont == 'C');
    
    std::puts("-- GAME OVER --");
    
    if (cont == 'E') {
        std::puts("Thanks for playing!!!");
    } else if (turn <= turnLimit) {
        printf("Player %d is the winner!!!\n", this->winner->getID());
    } else {
        std::puts("The maximum number of turns has been reached.");
    }
}
