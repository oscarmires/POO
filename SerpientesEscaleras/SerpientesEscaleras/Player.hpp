//
//  Player.hpp
//  Oscar Miranda Escalante A01630791
//


#ifndef Player_hpp
#define Player_hpp

class Player {
private:
    int position;
    int id;
public:
    Player(int);
    int getPosition();
    void changePosition(int);
    void setPosition(int);
    int getID();
};

#endif /* Player_hpp */
