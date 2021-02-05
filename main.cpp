#include <iostream>

using namespace std;

int main() {
    system("chcp 65001");

    const int SIZE = 3;
    char board[SIZE][SIZE] = {{' ', ' ', ' '},
                              {' ', ' ', ' '},
                              {' ', ' ', ' '}};

    cout << "+++ Крестики-Нолики +++" << endl;
    cout << endl;

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "|" << board[i][j] << "|";
        }
        cout << endl;
    }
}
