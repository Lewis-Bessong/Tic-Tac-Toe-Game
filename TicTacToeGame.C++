// This game is a guided projected that will be based on the tic tac toe game 
#include <iostream>
#include <vector>


using namespace std;

/*
HOW TO STORE THE BOARD ?
    * with a 2D Vector or 2D Array 

HOW DO I DISPLAY THE BAORD DIFFERENTLY?
    *

HOW WILL A PLAYERS CHOOSE A MOVE?

HOW DO I KNOW WHOSE TURN IT IS?

WHEN DOES THE GAME END?
*/


void game_board() {

    char game_board[3][3]  = { // 3 rows and 3 columns of 

        {'X', 'O', 'X'},
        {'O', 'X', ' '},
        {' ', ' ', 'O'},

    };


    for (int i = 0; i < 3; i++) {  // for rows ig, i = row number, 'i = 0' means start at 0 then dont go past 3 (i < 3) then move to the next row (i++)

        for (int j = 0;  j < 3; j++){ // for columns, same thing here. 
            
            std::cout << game_board[i][j] << " ";
        }
        std::cout << std::endl; // goes to next line for input of row and colum
        std::cout << "------" << std::endl; // creats a seperator between rows
        

    }
    

}

int main() {
// === BOARD CREATION ===

game_board();

// === TRACK PLAYER ===

// === DISPLAY BOARD EVRY TURN ===

// === PLAYER INPUT ===

// === INPUT VALIDATION/LOGIC ===

// === INPUT SYMBOL

// === LOGIC FOR WIN ===

return 0;
}
