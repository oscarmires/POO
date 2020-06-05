//
//  Board.hpp
//  Oscar Miranda Escalante A01630791
//

#ifndef Board_hpp
#define Board_hpp

#include "Snake.hpp"
#include "Ladder.hpp"
#include "Player.hpp"
#include <vector>

class Board {
private:
    std::vector<Tile*> tiles;
public:
    Board(int = 30, int = 3, int = 3, int = 3, int = 3);
    int size();
    Tile getTile(int pos);
    void print();
};

#endif /* Board_hpp */
