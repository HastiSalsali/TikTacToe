#include <iostream>
#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;

const int tableSize = 3, columnLength = tableSize * 4 + 2;
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


/*_______________________________________________________________*/

int main() {
    TikTakToe Game;
    Game.SetSquare(X, 3, 2);
    Game.SetSquare(O, 2, 2);

    Game.PrintTable();
}

/*_______________________________________________________________*/

//FIX ME
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
