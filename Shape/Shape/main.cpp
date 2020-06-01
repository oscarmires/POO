//
//  main.cpp
//  Shape
//
//  Created by Oscar Miranda Escalante on 01/06/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include <iostream>

#include "Circle.hpp"
#include "Rectangle.hpp"

int main(int argc, const char * argv[]) {
    Shape * shapes[5];
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();
    shapes[2] = new Rectangle(1, 2, 5, 6);
    shapes[3] = new Circle(4, 2, 1);
    shapes[4] = new Rectangle();
    
    for (auto a : shapes) {
        a->draw();
    }
    
    return 0;
}
