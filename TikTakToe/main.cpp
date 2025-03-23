#include <iostream>
#include <iomanip>
#include <sstream>
#include "TikTakToe.h"
using namespace std;

int main() {
    TikTakToe Game;
    Game.SetSquare(X, 1, 1);
    Game.SetSquare(O, 2, 2);
    Game.SetSquare(X, 3, 3);
    

    Game.PrintTable();
    cout << Game.CheckIfWin(X, 2, 2);
}
