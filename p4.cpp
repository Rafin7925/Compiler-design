#include <iostream>
#include <string>
using namespace std;
void checkIdentifier() {
    string input;
    cout << "Enter identifier: ";
    cin >> input;

    if (isalpha(input[0]) || input[0] == '_') {
        bool valid = true;
        for (int i = 1; i < input.length(); i++) {
            if (!isalnum(input[i]) && input[i] != '_') {
                valid = false;
                break;
            }
        }
        if (valid)
            cout << "Valid identifier." << endl;
        else
            cout << "Invalid identifier." << endl;
    } else {
        cout << "Invalid identifier." << endl;
    }
}