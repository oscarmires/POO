//
//  Tile.hpp
//  Oscar Miranda Escalante A01630791
//

#ifndef Tile_hpp
#define Tile_hpp

class Tile {
protected:
    int id;
    int move = 0;
    char type = 'N';
public:
    Tile();
    void setID(int id);
    int getID();
    int getMove();
    char getType();
};

#endif /* Tile_hpp */
