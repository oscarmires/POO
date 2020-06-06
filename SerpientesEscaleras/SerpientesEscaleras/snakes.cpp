//
//  mainSnakes.cpp
//  Oscar Miranda Escalante A01630791
//

#include "ManualGame.hpp"
#include "AutoGame.hpp"
#include "InvalidConfigurationException.hpp"
#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // args: path tiles snakes ladders penalty reward players turnLimit gametype
    try {
        if (argc == 1) {
            ManualGame g;
            g.start();
        } else if (argc == 9) {
            // convertir argv a enteros
            int * argv_int = new int[8];
            for (int i = 0; i < 8; ++i) {
                argv_int[i] = atoi(argv[i]);
            }
            string mode = argv[8];
            
            if (argv_int[1] <= argv_int[2] + argv_int[3]) { // tiles < snakes + ladders
                throw InvalidConfigurationException("tiles", argv_int[1]);
            }
            if (argv_int[2] < 0) { // snakes
                throw InvalidConfigurationException("snakes", argv_int[2]);
            }
            if (argv_int[3] < 0) { // ladders
                throw InvalidConfigurationException("ladders", argv_int[3]);
            }
            if (argv_int[6] < 1) { // players
                throw InvalidConfigurationException("players", argv_int[6]);
            }
            if (argv_int[7] < 2) { // turnLimit
                throw InvalidConfigurationException("turnLimit", argv_int[7]);
            }
            
            // modo manual
            if (mode == "M") {
                ManualGame g(argv_int[1], argv_int[2], argv_int[3], argv_int[4], argv_int[5], argv_int[6], argv_int[7]);
                g.start();
            // modo automático
            } else if (mode == "A") {
                AutoGame g(argv_int[1], argv_int[2], argv_int[3], argv_int[4], argv_int[5], argv_int[6], argv_int[7]);
                g.start();
            } else {
                throw InvalidConfigurationException("gameType", mode);
            }
        } else {
            throw InvalidConfigurationException();
        }
    } catch (InvalidConfigurationException& ice) {
        cerr << ice.what() << endl;
        return 1;
    }
    return 0;
}

