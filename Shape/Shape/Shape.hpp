//
//  Shape.hpp
//  Shape
//
//  Created by Oscar Miranda Escalante on 01/06/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <iostream>

class Shape {
private:
    int x, y;
public:
    Shape();
    Shape(int, int);
    virtual void draw() = 0;
    int getX();
    int getY();
};

#endif /* Shape_hpp */
