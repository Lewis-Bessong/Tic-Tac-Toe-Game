/*
This game is a guided project that I was able to make through researching solutions and dictionarys for C++, furthermore,
this project is the first project where I implement using git commands in Vscode, so every change I make to this code is 
a step towards learning how to use git commands to improve my Software engineering journey.
*/

#include <iostream>
#include <vector>

using namespace std;

// === BOARD CREATION ===


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


// === TRACK PLAYER === (What does it mean to track a player in C++?) (what ways can u track a player?)
    
    // 1. using enum for player types (X, O)
    
enum level {    //used to give anems to constancts, variables for things that wil never change
    LOW = 0,
    MEDIUM, // 1 
    HIGH // 2 
}; 

    // 2. using class/struct for Game State

    // 3. tracking the Player During Gameplay

   
// === DISPLAY BOARD EVRY TURN ===

// === PLAYER INPUT ===

// === INPUT VALIDATION/LOGIC ===

// === INPUT SYMBOL

// === LOGIC FOR WIN ===

return 0;
}
