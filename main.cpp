#include <iostream>
#include <string>
using namespace std;
int main() {
    int choice;
    do {
        cout << "\nChoose a task:\n";
        cout << "1. Check Numeric Constant\n";
        cout << "2. Find Operators\n";
        cout << "3. Check Comment Line\n";
        cout << "4. Check Identifier\n";
        cout << "5. Average of Array\n";
        cout << "6. Min and Max of Array\n";
        cout << "7. Concatenate Name\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: checkNumericConstant(); break;
            case 2: findOperators(); break;
            case 3: checkCommentLine(); break;
            case 4: checkIdentifier(); break;
            case 5: averageOfArray(); break;
            case 6: minMaxOfArray(); break;
            case 7: concatenateName(); break;
            case 0: cout << "Exiting program." << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}