#include <iostream>
#include <string>
using namespace std;void checkCommentLine() {
    string input;
    cout << "Enter line: ";
    cin.ignore();
    getline(cin, input);

    if (input.substr(0, 2) == "//")
        cout << "This is a single-line comment." << endl;
    else if (input.substr(0, 2) == "/*" && input.substr(input.length() - 2) == "*/")
        cout << "This is a multi-line comment." << endl;
    else
        cout << "This is not a comment line." << endl;
}