#include "TikTakToe.h"

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
void TikTakToe::SetSquare (TableOptions fillWith, int row, int column){
    if ( row >= 0 && row <= tableSize && column >= 0 && column <= tableSize){
        table[row][column] = fillWith;
    }
    else {
        cout << "not a valid position in table\n";
        throw exception();
    }
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
                    cout << "no valid variable in row " << row << " column " <<column << endl;
                    throw exception();
                    break;
            }
        }
        cout << "|\n";
    }
    cout << setw(columnLength) << "\n";

}

const bool TikTakToe::CheckIfWin(TableOptions player, int row, int column){ //FIX: can be shortened
    bool playerWon = false, check = true;
        //check collumn:
    for (int i=0; i < tableSize; i++){
        if (table[i][column] != player)
            check = false;
    }
    
    playerWon = playerWon || check;
    
        //check row:
    check = true;
    for (int i=0; i < tableSize; i++){
        if (table[row][i] != player)
            check = false;
    }
    playerWon = playerWon || check;
    
    //check diagonal
    
    if (row == column){
        check = true;
        for (int i=0; i < tableSize; i++){
            if (table[i][i] != player)
                check = false;
        }
    }
    playerWon = playerWon || check;
    
    //check antidagonal:
    if (row == (tableSize - column)){
        check = true;
        for (int i=0; i < tableSize; i++){
            for (int i=0; i < tableSize; i++){
                if (table[i][tableSize - i] != player)
                    check = false;
            }
        }
    }
    playerWon = playerWon || check;

    return playerWon;
};
void TikTakToe::NewMove(TableOptions x){
    int row, column;
    cout << "Please enter a number between 1 and 3:\n";
    cout << "-Row: ";
    cin >> row;
    while (row < 1 || row > 3 || !cin) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "~~~Invalid input, try agian\n"
        "-Row: ";
        cin >> row;
    }
    cout << "-Column: ";
    cin >> column;
    while (column < 1 || column > 3 || !cin) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "~~~Invalid input, try agian\n"
        "-Column: ";
        cin >> column;
    }
    
    
    
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
