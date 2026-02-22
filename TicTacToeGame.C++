/*
This game is a guided project that I was able to make through researching solutions and dictionarys for C++, furthermore,
this project is the first project where I implement using git commands in Vscode, so every change I make to this code is 
a step towards learning how to use git commands to improve my Software engineering journey.
*/

#include <iostream>
#include <vector>

using namespace std;


int main() {

// === BOARD CREATION ===

char game_board [3][3] = { 
    {' ', ' ', ' '},
    {' ', ' ', ' '},       // <--- Board creation
    {' ', ' ', ' '},
};

// printing the game 
cout << "   |   |   " << endl;
cout << " " << game_board[0][0] << " | " << game_board[0][1] << " | " << game_board[0][2] << endl;
cout << "___|___|___" << endl;
cout << "   |   |   " << endl;
cout << " " << game_board[1][0] << " | " << game_board[1][1] << " | " << game_board[1][2] << endl;
cout << "___|___|___" << endl;
cout << "   |   |   " << endl;
cout << " " << game_board[2][0] << " | " << game_board[2][1] << " | " << game_board[2][2] << endl;
cout << "   |   |   " << endl;

// ==== STORING PLAYER SYMBOL ====

enum class BoardState { // variables of constants that are in a class for state of the object called "game baord"
    
    X, // 0 
    O, // 1
    EMPTY // 2

};

enum class Players { // Storing constant variables for the class of players
    
    Player1, // 0 
    Player2, // 1

};

enum class GameState { // Storing constant variables for the class of Game State

    InProgress, // 0
    WinnerX, // 1
    WinnerO, // 2
    Draw // 3

};

return 0;
}
