/*
This game is a guided project that I was able to make through researching solutions and dictionarys for C++, furthermore,
this project is the first project where I implement using git commands in Vscode, so every change I make to this code is 
a step towards learning how to use git commands to improve my Software engineering journey.
*/

#include <iostream>
#include <vector>

using namespace std;

// ==== STORING CONST. VARIABLES FOR BOARD ====

enum class BoardState { // variables of constants that are in a class for state of the object called "game baord"
    
    X, // 0 ( Will be Player 1) 
    O, // 1 ( Will be player 2)
    EMPTY // 2

};

enum class Players { // Storing constant variables for the class of players
    
    Player1, // 0 (X)
    Player2, // 1 (O)

};

enum class GameState { // Storing constant variables for the class of Game State

    InProgress, // 0
    WinnerX, // 1
    WinnerO, // 2
    Draw, // 3
    GameStart // 4

};


int main() { // GAME START

// === BOARD CREATION ===

char game_board [3][3] = { 
    {' ', ' ', ' '},
    {' ', ' ', ' '},       
    {' ', ' ', ' '},
};

//player variable
const char playerX = 'X';
const char playerO = 'O';   // <---- Storing players
char currentplayer = 'X';

// printing the game 
cout << "The top left box is 1, the top middle box is 2 and so on, with the bottom right box being 9 \n\n";


cout << "   |   |   " << endl;
cout << " " << game_board[0][0] << " | " << game_board[0][1] << " | " << game_board[0][2] << endl;
cout << "___|___|___" << endl;
cout << "   |   |   " << endl;
cout << " " << game_board[1][0] << " | " << game_board[1][1] << " | " << game_board[1][2] << endl;
cout << "___|___|___" << endl;
cout << "   |   |   " << endl;
cout << " " << game_board[2][0] << " | " << game_board[2][1] << " | " << game_board[2][2] << endl;
cout << "   |   |   " << endl;
cout << "\n" << endl;

string users_first_input;
cout << "Box?: "; 
cin >> users_first_input;


/*

Options for next step: 

1. Initialize Input (Start to figure out how player inputs in board ) 

2. Decide how turns work ( Afer player1 plays then its player2 )

*/

return 0;
}
