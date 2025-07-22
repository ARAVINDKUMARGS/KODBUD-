#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
char current_marker;
int current_player;

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;
    if (board[row][col] == 'X' || board[row][col] == 'O') return false;
    board[row][col] = current_marker;
    return true;
}

void printBoard() {
    for (int i = 0; i < 3; ++i) {
        cout << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
        if (i < 2) cout << "--|---|--\n";
    }
}

char winner() {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i];
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2];
    return ' ';
}

int main() {
    printBoard();
    for (int i = 0; i < 9; ++i) {
        current_player = (i % 2) + 1;
        current_marker = (current_player == 1) ? 'X' : 'O';
        int slot;
        cout << "Player " << current_player << " enter slot: ";
        cin >> slot;
        if (!placeMarker(slot)) {
            cout << "Slot occupied! Try again.\n";
            --i;
            continue;
        }
        printBoard();
        if (winner() == 'X' || winner() == 'O') {
            cout << "Player " << current_player << " wins!" << endl;
            break;
        }
    }
    return 0;
}