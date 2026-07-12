#include <iostream>
#include <string>
using namespace std;

int main() {
    int input_count; // Refers to how many words the user wants to give the system
    string result; // The end result will be gradually completed and stored here

    cin >> input_count; // Take the user input for input_count

    for (int i = 0; i < input_count; i++) { // Do this the number in input_count, times
        string word; // First, declare a variable that stores the word that user inputs
        cin >> word; // Take it from the user

        if (word.length() > 10) { // if the word was longer than 10 characters
            result += word[0]; // Add the first letter of the word given to the end result's variable
            result += to_string(word.length() - 2); // Turn The word's length - 2 (Not including the first and the last letter) to the string and add it to the result variable
            result += word[word.length() - 1]; // Add the last letter to the result variable
            result += "\n"; // Put a newline at the end for the next word to be written in the next line and the right format
        }
        else { // if the word was equal or shorter than 10 letters
            result += word; // Just add the word to the result
            result += "\n"; // And put a newline at the end
        }
    }

    cout << result; // Print out the result

    return 0; // End the program
}

