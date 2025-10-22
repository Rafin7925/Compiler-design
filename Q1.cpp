#include <iostream>
using namespace std;

void checkNumericConstant()
{
    string input;
    cout << "Enter input: ";
    cin >> input;

    bool isNumeric = true;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] < 48 || input[i] > 57)
        {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "This is a numeric constant." << endl;
    else
        cout << "This is not numeric." << endl;
}

int main()
{
    checkNumericConstant();
    return 0;
}
