/*
This game is a guided project that I was able to make through researching solutions and dictionarys for C++, furthermore,
this project is the first project where I implement using git commands in Vscode, so every change I make to this code is 
a step towards learning how to use git commands to improve my Software engineering journey.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() { // GAME START

// === BOARD AND VARIABLE CREATION ===

char game_board [3][3] = { 
    {' ', ' ', ' '},
    {' ', ' ', ' '},       
    {' ', ' ', ' '},
};

// Storing players, (const char) is used to store a single character that cannot be changed
const char playerX = 'X'; // variable for player X (with single character 'X')
const char playerO = 'O'; // variable for player O (with single character 'O')
char currentplayer = playerX; 

// variables that store the position on the board (r = rows, c = colums) ( the -1 means that its deafult and player hasnt chosen a position yet but replaces it when player inputs their desired position)
int r = -1;  
int c = -1; 


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

    cout << "Turn to Play: " << currentplayer << "\n";
    cout << "Enter your postition, for r c from 0-2: ";
    cin >> r >> c;

// ==== CONDITIONAL FOR GAME/PLAYER INPUT ====

    if (game_board[r][c] == ' '){ // if the user entered a row and colum that matched ' ' then
        game_board[r][c] = currentplayer; // the entered r and c by the player is valid.
        currentplayer = (currentplayer == playerX) ? playerO : playerX; // ternary operator
    } else { // if the users position input is taken then 
        cout << "\nInvalid move! This sqaure is already taken.\n\n";
        cout << "Turn to Play: " << currentplayer << endl; // ask again
        cout << "Enter your postition, for r c from 0-2: ";
        cin >> r >> c;
        game_board[r][c] = currentplayer;
        currentplayer = (currentplayer == playerX) ? playerO : playerX; // This is a ternary operator and this is like a if conditional (1. check if current player == x and if it is then[?] the next current player becomes player O if not[:] then current player becomes player X) 
    }

} 


/*
 Task List:

. replay option    
. invalid input protection feature
. arrange code for readability   (continous)
. find out how to make code for checking wins and draws for game. 


*/


/*
Reminder list:
 
. have a unecessary enum but will need it for later for player input security.
. players have 8 possible ways to win and many ways to draw  

*/

return 0;
}
