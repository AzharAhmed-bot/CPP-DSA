// Q4: Program to determine whether a character is uppercase or lowercase using a function


#include <iostream>
#include <cctype>
using namespace std;

void determineCasing(char ch) {
    if (isupper(ch)) {
        cout << "'" << ch << "' is an UPPERCASE letter." << endl;
    } else if (islower(ch)) {
        cout << "'" << ch << "' is a lowercase letter." << endl;
    } else {
   
        cout << "'" << ch << "' is not an alphabetic character." << endl;
    }
}

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    // Call the function to determine and display casing
    determineCasing(character);

    return 0;
}