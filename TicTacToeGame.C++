/*
This game is a guided project that I was able to make through researching solutions and dictionarys for C++, furthermore,
this project is the first project where I implement using git commands in Vscode, so every change I make to this code is 
a step towards learning how to use git commands to improve my Software engineering journey.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() { // GAME START

// === BOARD CREATION ===

char game_board [3][3] = { 
    {' ', ' ', ' '},
    {' ', ' ', ' '},       
    {' ', ' ', ' '},
};

//player variable
const char playerX = 'X';
const char playerO = 'O';   // <---- Storing players, (const char) is used to store a single character that cannot be changed 
char currentplayer = 'playerX';
 
int r = -1; // deafult for rows 
int c = -1; // default for colums

// printing the game 


for (int i = 0; i < 9; i++) { // i starts as 0, loops until it reaches 9x, i adds 1 each loop
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

    cout << "Turn to Play: " << currentplayer << endl;
    cout << "\nEnter your postition, for r c from 0-2: ";
    cin >> r >> c;

    game_board[r][c] = currentplayer;

    
}


/*

Questions for project

1. what variable answers who is playing now
2. when exactly should that variable change?
3. what happens if the player makes an invalid move
4.Does the board change before or after switching turns? 

*/

return 0;
}
