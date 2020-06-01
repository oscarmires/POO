//
//  Circle.hpp
//  Shape
//
//  Created by Oscar Miranda Escalante on 01/06/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "Shape.hpp"

class Circle : public Shape {
private:
    int r;
public:
    Circle();
    Circle(int, int, int);
    void draw();
};

#endif /* Circle_hpp */
