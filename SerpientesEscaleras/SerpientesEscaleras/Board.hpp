//
//  Board.hpp
//  Oscar Miranda Escalante A01630791
//

#ifndef Board_hpp
#define Board_hpp

#include "Tile.hpp"
#include "Player.hpp"
#include <vector>

class Board {
private:
    std::vector<Tile> tiles;
public:
    Board();
    unsigned long int size();
    Tile getTile(int pos);
    void print();
};

#endif /* Board_hpp */
