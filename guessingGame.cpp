#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int userGuess;
    int tries = 0;

    cout << "Welcome to the Mystery Number Challenge!" << endl;
    cout << "Try to guess the secret number between 1 and 10." << endl;

    while (true) {
        int secretNumber = rand() % 10 + 1;
        tries++;

        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > secretNumber) {
            cout << "Too high! Aim lower." << endl;
        } else if (userGuess < secretNumber) {
            cout << "Too low! Aim higher." << endl;
        } else {
            cout << "Congratulations! You found the secret number in " << tries << " tries." << endl;
            break;
        }
    }

    return 0;
}
