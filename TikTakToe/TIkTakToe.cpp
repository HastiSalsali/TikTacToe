#include "TikTakToe.h"
extern const int tableSize, columnLength;

TikTakToe::TikTakToe(){
    ClearTable();
}

void TikTakToe::ClearTable(){
    for (int row=0; row < tableSize; row++){
        for (int column = 0; column < tableSize; column++){
            table[row][column] = EMPTY;
        }
    }
}
void TikTakToe::SetSquare (TableOptions player, int row, int column){
    if ( row >= 0 && row <= tableSize && column >= 0 && column <= tableSize){
        table[row - 1][column - 1] = player;
    }
    //throw exception
    
};


const void TikTakToe::PrintTable(){
    for (int row = 0; row < tableSize; row++){
        cout << setfill('-') << setw(columnLength) << "\n";
        for (int column = 0; column < tableSize; column++){
            cout << "| ";
            switch (table [row][column]) {
                case EMPTY:
                    cout << "  ";
                    break;
                case X:
                    cout << "X ";
                    break;
                case O:
                    cout << "O ";
                    break;
                default:
                    //throw exception
                    break;
            }
        }
        cout << "|\n";
    }
    cout << setw(columnLength) << "\n";

}
/*
 -------------
 | O | X |   |
 -------------
 | O | X |   |
 -------------
 | O | X |   |
 -------------
 
 */
