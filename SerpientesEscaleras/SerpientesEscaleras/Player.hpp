//
//  Player.hpp
//  Oscar Miranda Escalante A01630791
//


#ifndef Player_hpp
#define Player_hpp

#include <string>
using std::string;

class Player {
private:
    int position;
    int id;
public:
    Player(int);
    int getPosition();
    int changePosition(int);
    void setPosition(int);
    int getID();
    void setID(int);
};

#endif /* Player_hpp */
