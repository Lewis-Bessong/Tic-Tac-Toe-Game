/*
This game is a guided project that I was able to make through researching solutions and dictionarys for C++, furthermore,
this project is the first project where I implement using git commands in Vscode, so every change I make to this code is 
a step towards learning how to use git commands to improve my Software engineering journey.
*/

#include <iostream>
#include <vector>
using namespace std;

void drawBoard(char game_board[3][3]) {
    cout << "\n";
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
}

bool checkwin(char game_board[3][3]) {

        // check for rows
        for (int i = 0; i < 3; i++) { 
            if (game_board[i][0] != ' ' && game_board[i][0] == game_board[i][1] && game_board[i][1] == game_board[i][2]) { 
            
                return true;
            } 
        } 

        //check for columns
        for (int i = 0; i < 3; i++) { 
            if (game_board[0][i] != ' ' && game_board[0][i] == game_board[1][i] && game_board[1][i] == game_board[2][i]) { 
            
                return true;
            } 
        }

        //check for diagnols (No loop for diagnols because its specific)

        // for top left to bottom right
        if (game_board[0][0] != ' ' && game_board[0][0] == game_board[1][1] && game_board[1][1] == game_board[2][2]) {
        
            return true;
        }

       // for top right to bottom left box
        if (game_board[0][2] != ' ' && game_board[0][2] == game_board[1][1] && game_board[1][1] == game_board[2][0]) {
        
            return true;
        }

        return false;
    }

bool isBoardFull(char game_board[3][3]) {
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                if (game_board[r][c] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

int main() { // GAME START

// === BOARD AND VARIABLE CREATION ===

char game_board [3][3] = { // 3 x 3 array
    {' ', ' ', ' '},
    {' ', ' ', ' '},       
    {' ', ' ', ' '},
};



// Storing players, (const char) is used to store a single character that cannot be changed
const char Empty = ' ';
const char playerX = 'X'; // variable for player X (with single character 'X')
const char playerO = 'O'; // variable for player O (with single character 'O')
char currentplayer = playerX; 

// variables that store the position on the board (r = rows, c = colums) ( the -1 means that its deafult and player hasnt chosen a position yet but replaces it when player inputs their desired position)
int r = -1;  
int c = -1; 


// printing the game
for (int i = 0; i < 9; i++) { // i starts as 0, loops until it reaches 9x, i adds 1 each loop

    drawBoard(game_board);

    cout << "Turn to Play: " << currentplayer << "\n";
    cout << "Enter your postition, for row and column from 0-2 (0 meaning the first, 1 being the second, 2 being third): ";
    cin >> r >> c;

    // ==== CONDITIONAL FOR GAME/PLAYER INPUT ====

    if (game_board[r][c] == ' '){ // if the user entered a row and colum that matched ' ' then
        game_board[r][c] = currentplayer; // the entered r and c by the player is valid. 
        cout << "\nInvalid move!\n\n";
        i--;
        continue;
    }

    if (checkwin()) {
        
    }

    // ==== WIN CHECKS FOR PLAYER WINS ====

    // check for rows 


        // ====  CHECK DRAW WHEN NO WIN ====
    

    if (checkwin()) {
        cout << "\nPlayer " << currentplayer << " has won.\n";
        break;
    }

    if (isBoardFull()) {
        cout << "\nIt's a draw.\n";
        break;
    }

}

    



/*
 Task List:

. Need to end game by april 1

. replay option    
. invalid input protection feature
. Find out how to print the game again after user wins so its 
proven that user has won.



Reminder list:
 
. always make sure code is readable
. need to tell the computer when its full. 
. need to finish by tommorrow

. after finishing project need to improve for java, must be done today.
*/

return 0;
}
