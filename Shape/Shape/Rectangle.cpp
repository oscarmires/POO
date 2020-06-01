//
//  Rectangle.cpp
//  Shape
//
//  Created by Oscar Miranda Escalante on 01/06/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include "Rectangle.hpp"

Rectangle::Rectangle() : Shape() {
    this->l = 0;
    this->w = 0;
}

Rectangle::Rectangle(int x, int y, int l, int w) : Shape(x, y) {
    this->l = l;
    this->w = w;
}

void Rectangle::draw() {
    puts("soy un rectángulo");
}
