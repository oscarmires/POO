//
//  Rectangle.hpp
//  Shape
//
//  Created by Oscar Miranda Escalante on 01/06/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Shape.hpp"

class Rectangle : public Shape {
private:
    int l, w;
public:
    Rectangle();
    Rectangle(int, int, int, int);
    void draw();
};

#endif /* Rectangle_hpp */
