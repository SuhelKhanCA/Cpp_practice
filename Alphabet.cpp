#include <iostream>
#include <cctype> // for isupper and islower functions

using namespace std;

int main() {
    string inputString;

    // Read a string from the user
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Count the number of vowels, upper case, and lower case letters
    int vowels = 0, upperCase = 0, lowerCase = 0;
    for (char ch : inputString) {
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else if (isupper(ch)) {
                upperCase++;
            } else if (islower(ch)) {
                lowerCase++;
            }
        }
    }

    // Capitalize the first letter and convert the rest to lowercase
    if (!inputString.empty()) {
        inputString[0] = toupper(inputString[0]);
        for (size_t i = 1; i < inputString.length(); ++i) {
            inputString[i] = tolower(inputString[i]);
        }
    }

    // Print the results
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of upper case letters: " << upperCase << endl;
    cout << "Number of lower case letters: " << lowerCase << endl;
    cout << "Capitalized string: " << inputString << endl;

    return 0;
}
