#include<iostream>
using namespace std;

void displayBoard(char gameBoard[3][3]) {
    cout << "   0  1  2" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i << "  ";
        for (int j = 0; j < 3; j++) {
            cout << gameBoard[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkWin(char gameBoard[3][3], char symbol) {
    for (int i = 0; i < 3; i++) {
        if ((gameBoard[i][0] == symbol && gameBoard[i][1] == symbol && gameBoard[i][2] == symbol) ||
            (gameBoard[0][i] == symbol && gameBoard[1][i] == symbol && gameBoard[2][i] == symbol)) {
            return true;
        }
    }

    return (gameBoard[0][0] == symbol && gameBoard[1][1] == symbol && gameBoard[2][2] == symbol) ||
           (gameBoard[0][2] == symbol && gameBoard[1][1] == symbol && gameBoard[2][0] == symbol);
}

bool checkDraw(char gameBoard[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (gameBoard[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

char switchPlayer(char currentPlayer) {
    return (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    char gameBoard[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';

    cout << "Welcome to the Tic-Tac-Toe Game!\n";

    while (true) {
        displayBoard(gameBoard);

        int row, col;

        cout << currentPlayer << ", enter your move: ";
        cin >> row >> col;

        if (row < 0 || row >= 3 || col < 0 || col >= 3 || gameBoard[row][col] != ' ') {
            cout << "Invalid move!" << endl;
        } else {
            gameBoard[row][col] = currentPlayer;

            if (checkWin(gameBoard, currentPlayer)) {
                displayBoard(gameBoard);
                cout << currentPlayer << " wins!" << endl;
                break;
            }

            if (checkDraw(gameBoard)) {
                displayBoard(gameBoard);
                cout << "The game is a draw!" << endl;
                break;
            }

            currentPlayer = switchPlayer(currentPlayer);
        }
    }

    return 0;
}
