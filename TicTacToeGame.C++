// This game is a guided projected that will be based on the tic tac toe game 
#include <iostream>
#include <vector>

using namespace std;

// === BOARD CREATION ===


void game_display(const char game_board[3][3]) {
    cout << "\n";
    cout << " " << game_board [0][0] << " " << game_board [0][1] << " " << game_board [0][2] << "\n";
    cout << " ---|---|---\n";
    cout << " " << game_board [1][0] << " " << game_board [1][1] << " " << game_board [1][2] << "\n";
    cout << " ---|---|---\n";
    cout << " " << game_board [2][0] << " " << game_board [2][1] << " " << game_board [2][2] << "\n";
    cout << "\n";
}

int main() {

cout << game_display << endl;   

// === TRACK PLAYER ===

// === DISPLAY BOARD EVRY TURN ===

// === PLAYER INPUT ===

// === INPUT VALIDATION/LOGIC ===

// === INPUT SYMBOL

// === LOGIC FOR WIN ===

return 0;
}
