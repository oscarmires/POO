//
//  main.cpp
//  Sobrecarga
//
//  Created by Oscar Miranda Escalante on 02/06/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include <iostream>
#include "CoordRect.hpp"
#include "CoordPolar.hpp"

int main() {
    CoordRect c1(4, 5);
    CoordRect c2(2, 3);
    std::cout << c1 << '+' << c2 << '=' << c1 + c2 << std::endl;
    
    CoordPolar pol1(3, 50);
    std::cout << c1 << '+' << pol1 << '=' << c1 + pol1 << std::endl;
    return 0;
}
