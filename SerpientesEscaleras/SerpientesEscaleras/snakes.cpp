//
//  mainSnakes.cpp
//  Oscar Miranda Escalante A01630791
//

#include "ManualGame.hpp"
#include "AutoGame.hpp"
#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // args: path tiles snakes ladders penalty reward players turnlimit gametype
    if (argc == 1) {
        ManualGame g;
        g.start();
    } else if (argc == 9) {
        // convertir argv a enteros
        int * argvint = new int[9];
        for (int i = 0; i < 9; ++i) {
            argvint[i] = atoi(argv[i]);
        }
        string mode = argv[8];
        // modo manual
        if (mode == "M") {
            ManualGame g(argvint[1], argvint[2], argvint[3], argvint[4], argvint[5], argvint[6], argvint[7]);
            g.start();
        // modo automático
        } else if (mode == "A") {
            AutoGame g(argvint[1], argvint[2], argvint[3], argvint[4], argvint[5], argvint[6], argvint[7]);
            g.start();
        }
    } else {
        puts("Error: wrong number of arguments.");
        puts("For customized game, use all of the following...");
        cout <<
        "tiles: int\n"
        "snakes: int\n"
        "ladders: int\n"
        "penalty: int\n"
        "reward: int\n"
        "players: int > 2\n"
        "turns: int > 2\n"
        "gametype: M for manual, A for auto"
        << endl;
    }
    return 0;
}

