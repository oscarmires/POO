//
//  Shape.cpp
//  Shape
//
//  Created by Oscar Miranda Escalante on 01/06/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include "Shape.hpp"

Shape::Shape() {
    this->x = 0;
    this->y = 0;
}

Shape::Shape(int x, int y) {
    this->x = x;
    this->y = y;
}

int Shape::getX() {
    return this->x;
}

int Shape::getY() {
    return this->y;
}
