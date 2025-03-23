#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

#ifndef TIKTAKTOE_H
#define TIKTAKTOE_H

constexpr int tableSize = 3, columnLength = tableSize * 4 + 2;
enum TableOptions{EMPTY = 0, X, O};


class TikTakToe {
private:
    TableOptions table [tableSize][tableSize];
    unsigned short int rounds = 0;
    
public:
    TikTakToe();
    
    void ClearTable();
    void SetSquare (TableOptions fillWith, int row, int column);
    bool NewMove (TableOptions X);
    
    const void PrintTable();
    const bool CheckIfWin(TableOptions player, int row, int column);
    
    
    
};

#endif
