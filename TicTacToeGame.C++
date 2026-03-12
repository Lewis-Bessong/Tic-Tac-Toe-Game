/*
This game is a guided project that I was able to make through researching solutions and dictionarys for C++, furthermore,
this project is the first project where I implement using git commands in Vscode, so every change I make to this code is 
a step towards learning how to use git commands to improve my Software engineering journey.
*/

#include <iostream>
#include <vector>

using namespace std;

enum BoardState { // variables for possible board states 

    EMPTY, // 0
    PlayerX, // 1
    PlayerO // 2
};

// Code For declaring state in the game board 


int main() { // GAME START

// === BOARD CREATION ===

char game_board [3][3] = { 
    {' ', ' ', ' '},
    {' ', ' ', ' '},       
    {' ', ' ', ' '},
};


// Code For declaring state in the game baord


//player variable
const char playerX = 'X';
const char playerO = 'O';   // <---- Storing players, (const char) is used to store a single character that cannot be changed 
char currentplayer = playerX;

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

    cout << "Turn to Play: " << currentplayer << "\n";
    cout << "Enter your postition, for r c from 0-2: ";
    cin >> r >> c;

    if (game_board[r][c] == ' '){ // if the user entered a row and colum that matched ' ' the
        game_board[r][c] = currentplayer; // the entered r and c by the player is valid.
        currentplayer = (currentplayer = playerX) ? playerO : playerX; //
    } else { // if the users position input is taken then 
        cout << "Invalid move! This sqaure is already taken.\n";
        cout << "Turn to Play: " << currentplayer << endl; // ask again
        cout << "Enter your postition, for r c from 0-2: ";
        cin >> r >> c;
        game_board[r][c] = currentplayer;
        currentplayer = (currentplayer = playerX) ? playerO : playerX; // Dont know what this fully does
    }

} 


/*
 Task List:

 
 2. replay option    
 3. protection feature
 4. arrange code for readability   (continous)
 5. Figure out why after player x and o goes player o goes again 2x.

*/

/*

Reminder list:
 
1. after solving voerwriting issue, think of next step for the project. (almost done)
2. have a unecessary enum but will need it for later for player input security.
3. You still dont know what the turn over function does (last line of the code)

*/

return 0;
}
