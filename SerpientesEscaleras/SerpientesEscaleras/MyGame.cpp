//
//  MyGame.cpp
//  Oscar Miranda Escalante A01630791
//

#include "MyGame.hpp"
#include <iostream>

MyGame::MyGame() : player1(1), player2(2) {
    this->turn = 1;
    this->turnLimit = 30;
    this->currentPlayer = &player1;
}

void MyGame::nextTurn() {
    if (currentPlayer->getID() == player1.getID()) {
        currentPlayer = &player2;
    } else {
        currentPlayer = &player1;
    }
    ++this->turn;
}

void MyGame::start() {
    this->board.print();
    puts("Press C to continue next turn, or E to end the game");
    char cont;
    int diceVal, playerPos;
    char firstResultType = 'N';
    do {
        std::cin >> cont;
        if (cont != 'E' && cont != 'C') {
            std::cout << "Invalid option, please press C to continue next turn "
            "or E to end the game" << std::endl;
            cont = 'C';
            continue;
        }
        // registar posición actual
        int prevPos = currentPlayer->getPosition();
        // mover jugador
        diceVal = dice.roll();
        currentPlayer->changePosition(diceVal);

        switch (board.getTile(currentPlayer->getPosition()-1).getType()) {
            case Tile::Type::S:
                firstResultType = 'S';
                this->currentPlayer->changePosition(-3);
                break;
            case Tile::Type::L:
                firstResultType = 'L';
                this->currentPlayer->changePosition(+3);
                break;
            case Tile::Type::N:
                firstResultType = 'N';
                break;
        }
        
        // registrar nueva posición
        playerPos = this->currentPlayer->getPosition();
        // imprimir datos (turno, jugador, casilla, numdado, tipo, posfinal)
        if (playerPos >= 30) {
            printf("%d %d %d %d N >=30\n", turn, this->currentPlayer->getID(), prevPos, diceVal);
            break;
        }
        printf("%d %d %d %d %c %d\n", turn, this->currentPlayer->getID(), prevPos, diceVal, firstResultType, playerPos);
        nextTurn();
    } while (cont == 'C' && turn <= turnLimit);
    
    std::puts("-- GAME OVER --");
    
    if (cont == 'E') {
        std::puts("Thanks for playing!!!");
    } else if (turn > turnLimit) {
        std::puts("The maximum number of turns has been reached.");
    } else {
        printf("Player %d is the winner!!!\n", this->currentPlayer->getID());
    }
}
