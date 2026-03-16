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

    //Class/Variable for checking 8 possible wins

    class GameStateCheck { // a class for checking the game state

        private: // members not accesible outside this code (this is already stored outside the code)

            char game_board[3][3] = { // 3 x 3 array
                {' ', ' ', ' '},
                {' ', ' ', ' '},       
                {' ', ' ', ' '},
            };

            const char playerX = 'X';
            const char playerO = 'O';
            char currentplayer = playerX;

        public: // members accessible outside this code
            
            bool check_row_win() { // check if true

                // check for first row

                if (game_board[0][0] == playerX && game_board[0][1] == playerX && game_board[0][2] == playerX) { // must assign each game board palce to a player instead of &&

                    cout << "Player X has Won!" << endl;

                } else if (game_board[0][0] == playerO && game_board[2][1] == playerO && game_board[2][2] == playerO) {

                    cout << "Player O has Won!" << endl;

                }
                
                //check for second row

                if (game_board[1][0] == playerX && game_board[1][1] == playerX && game_board[1][2] == playerX) {

                    cout << "Player X has Won!" << endl;

                } else if (game_board[1][0] == playerO && game_board[1][1] == playerO && game_board[1][2] == playerO) {

                    cout << "Player O has Won!" << endl;

                }


                //check for third row
                if (game_board[2][0] == playerX && game_board[2][1] == playerX && game_board[2][2] == playerX) {

                    cout << "Player X has Won!" << endl;

                } else if (game_board[2][0] == playerO && game_board[0][1] == playerO && game_board[0][2] == playerO) {

                    cout << "Player O has Won!" << endl;

                }
                
 
            }

            bool check_column_win() {
            }

            bool check_draw() { //check if true 
                //find out how to put logic for if board is filled with no wins
            }
        
    };

} 


/*
 Task List:

. replay option    
. invalid input protection feature
. arrange code for readability   (continous)
. match if conditional loops throughout rows and columns (in progress)

*/


/*
Reminder list:
 
. might need enum for checking for wins and draws
. players have 8 possible ways to win and many ways to draw  

*/

return 0;
}
