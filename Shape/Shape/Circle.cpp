//
//  Circle.cpp
//  Shape
//
//  Created by Oscar Miranda Escalante on 01/06/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include "Circle.hpp"

Circle::Circle() : Shape() {
    this->r = 0;
}

Circle::Circle(int x, int y, int r) : Shape(x, y) {
    this->r = r;
}

void Circle::draw() {
    puts("soy un círculo");
}
