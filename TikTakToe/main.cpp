#include <iostream>
#include <iomanip>
#include <sstream>
#include "TikTakToe.h"
using namespace std;

int main() {
    TikTakToe Game;
    Game.SetSquare(X, 0, 0);
    Game.SetSquare(X, 0, 1);
    Game.SetSquare(O, 0, 2);
    Game.SetSquare(O, 1, 0);
    Game.SetSquare(X, 1, 1);
    Game.SetSquare(O, 1, 2);
    Game.SetSquare(X, 2, 0);
    Game.SetSquare(EMPTY, 2, 1);
    Game.PrintTable();
    
    cout << Game.NewMove(X);;
}
