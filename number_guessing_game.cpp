#include <iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    bool hasWon = false;
    // Welcome message
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl << endl;
    while (!hasWon && attempts < 10) {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        attempts++;
        if (guess == secretNumber) {
            hasWon = true;
            cout << "\nCongratulations! You've won!" << endl;
            cout << "You found the number in " << attempts << " attempts!" << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try a higher number." << endl;
        }
        else {
            cout << "Too high! Try a lower number." << endl;
        }

        cout << "Attempts remaining: " << 10 - attempts << endl << endl;
    }
    if (!hasWon) {
        cout << "Game Over! You've run out of attempts." << endl;
        cout << "The secret number was: " << secretNumber << endl;
    }
    return 0;

}
