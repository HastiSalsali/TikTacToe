#include <iostream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include "TikTakToe.h"
using namespace std;

/*_______________________________________________________________*/

int main() {
    TikTakToe Game;
    Game.SetSquare(X, 3, 2);
    Game.SetSquare(O, 2, 2);

    Game.PrintTable();
}

/*_______________________________________________________________*/


