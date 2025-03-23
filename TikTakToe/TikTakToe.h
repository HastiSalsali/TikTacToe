#ifndef TIKTAKTOE_H
#define TIKTAKTOE_H

#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

extern const int tableSize = 3, columnLength = tableSize * 4 + 2;
enum TableOptions{EMPTY = 0, X, O};

class TikTakToe {
private:
    TableOptions table [tableSize][tableSize];
    
public:
    TikTakToe();
    
    void ClearTable();
    void SetSquare (TableOptions player, int row, int column);
    
    const void PrintTable();
};

#endif
