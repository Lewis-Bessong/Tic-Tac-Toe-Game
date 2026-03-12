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

const int board_size = 3;
BoardState game_board [board_size][board_size];

void initialzeboard(){ // declaring the defeault baord state as empty                   
    for (int i = 0; i < board_size; ++i){
        for ( int j = 0; j < board_size; ++i){
            game_board[i][j] = BoardState::EMPTY;
        }
    }


}

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

    cout << "Turn to Play: " << currentplayer << endl;
    cout << "Enter your postition, for r c from 0-2: ";
    cin >> r >> c;

    game_board[r][c] = currentplayer;
    currentplayer = (currentplayer = playerX) ? playerO : playerX;
} 




/*
 Task List:

 1. Create saftey feature for overwriting 
 2. replay option
 3. protection feature
 4. arrange code for readability
 
*/

/*

Reminfer list:

1. find way to store variable for game state of baord correctly
2. after solving voerwriting issue, think of next step for the project.

*/

return 0;
}
