//
//  main.cpp
//  Exceptions
//
//  Created by Oscar Miranda Escalante on 05/06/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include <iostream>

int getVal(int* arr, int size, int n) {
    if (n < 0 || n >= size)
        throw std::out_of_range("No se puede");
    return arr[n];
}

int main(int argc, const char * argv[]) {
    int* arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }
    try {
        getVal(arr, 10, 11);
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of Range error: " << e.what() << '\n';
    }
    return 0;
}
