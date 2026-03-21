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
    cout << "Enter your postition, for row and column from 0-2 (0 meaning the first, 1 being the second, 2 being third): ";
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

    // ==== WIN CHECKS FOR PLAYER WINS ====

    // check for rows 
    bool checkwin(); {

        for (i = 0; i < 3; i++) { // i will loop through rows, starting from 0 will check if player x has filled all rows
            if (game_board[i][0] == playerX && game_board[i][1] == playerX && game_board[i][2] == playerX) { // player x
            
                return true;
            } else if (game_board[i][0] == playerO && game_board[i][1] == playerO && game_board[i][2] == playerO) { // player o
           
                return true;
            } 
        } 

        //check for columns
        for (i = 0; i < 3; i++) {
            if (game_board[0][i] == playerX && game_board[1][i] == playerX && game_board[2][i] == playerX) {
            
                return true;
            } else if (game_board[0][i] == playerO && game_board[1][i] == playerO && game_board[2][i] == playerO) {
            
                return true;
            }

        }

        //check for diagnols (No loop for diagnols because its specific)

        // for top left to bottom right
        if (game_board[0][0] == playerX && game_board[1][1] == playerX && game_board[2][2] == playerX) {
        
            return true;
        } else if (game_board[0][0] == playerO && game_board[1][1] == playerO && game_board[2][2] == playerO) {
        
            return true;
        }

       // for top right to bottom left box
        if (game_board[0][2] == playerX && game_board[1][1] == playerX && game_board[2][0] == playerX) {
        
            return true;
        } else if (game_board[0][2] == playerO && game_board[1][1] == playerO && game_board[2][0] == playerO) {
    
            return true;
        }

        return false;
    }

        // ====  CHECK DRAW WHEN NO WIN ====
    bool isBoardFull(); {
        for (int r = 0; r < 3; r++){
            for (int c = 0; r < 3; r++) {
                if (game_board[r][c] != 'X' && game_board[r][c] != 'O'){
                    return false;
                }
            }
        }
        return true;
    }

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
