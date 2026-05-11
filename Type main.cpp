#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Create variables
    int chosenNumber = 7; // The number to guess
    int userGuess = 0;    // Variable to store current input
    vector<int> guessHistory; // Empty list to record every attempt

    cout << "--- Welcome to the Number Guessing Game ---" << endl;

    // 2. While loop: continues as long as guess is not equal to chosen number
    while (userGuess != chosenNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        // 3. Immediately save the value into the list
        guessHistory.push_back(userGuess);

        // 4. If/Else statements to compare guess with chosen number
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        } 
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        } 
        else {
            cout << "Correct!" << endl;
        }
    }

    // 5. For loop: display all guesses stored in the list
    cout << "\nGame Over! Here are the guesses you made:" << endl;
    for (int i = 0; i < guessHistory.size(); i++) {
        cout << "Attempt " << i + 1 << ": " << guessHistory[i] << endl;
    }

    return 0;
}
