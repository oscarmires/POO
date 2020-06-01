//
//  Tile.hpp
//  Oscar Miranda Escalante A01630791
//

#ifndef Tile_hpp
#define Tile_hpp

class Tile {
private:
    int type, id;
public:
    Tile();
    Tile(int);
    void setID(int id);
    int getID();
    int getType();
    enum Type {S, L, N};
};

#endif /* Tile_hpp */
