/*
This game is a guided project that I was able to make through researching solutions and dictionarys for C++, furthermore,
this project is the first project where I implement using git commands in Vscode, so every change I make to this code is 
a step towards learning how to use git commands to improve my Software engineering journey.
*/

#include <iostream>
#include <vector>
using namespace std;

void drawBoard(char game_board[3][3]) { // unseen untill called in the main (used for better accesibility)
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

char currentplayer = 'X'; 
int r, c;


// printing the game
for (int i = 0; i < 9; i++) { // i starts as 0, loops until it reaches 9x, i adds 1 each loop

    drawBoard(game_board);

    cout << "Turn to Play: " << currentplayer << "\n";
    cout << "Enter your postition, for row and column from 0-2 (0 meaning the first, 1 being the second, 2 being third): ";
    cin >> r >> c;


    //check move
    if (game_board[r][c] != ' '){ // checks if spot is already taken
        cout << "\nInvalid move!\n\n";
        i--; // retry turn, goes back one step in loop
        continue; //skips the rest of the loop and restarts
    }

    // place move
    game_board[r][c] = currentplayer; // the entered r and c by the player is valid.

    //check win
    if (checkwin(game_board)) { // calls if someone has won
        drawBoard(game_board);  // prints
        cout << "\nPlayer " << currentplayer << " has won.\n";
        break; // used to stop action of loop
    }

    //check draw
    if (isBoardFull(game_board)) { // checks if all spots are filled
        drawBoard(game_board);
        cout << "\nIts a draw.\n";
        break; // end game
    }

    currentplayer = (currentplayer == 'X') ? 'O' : 'X'; // ternary operator (short if else)
}

return 0;
}
