#include <iostream>
#include <string>
using namespace std;
void concatenateName() {
    string first, last;
    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;

    cout << "Full name: " << first << " " << last << endl;
}