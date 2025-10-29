#include <iostream>
using namespace std;

void findOperators()
{
    string input;
    cout << "Enter input: ";
    cin >> input;

    int opCount = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        char ch = input[i];

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=')
        {
            opCount++;
            cout << "operator" << opCount << ": " << ch << endl;
        }
    }

    if (opCount == 0)
    {
        cout << "No operators found." << endl;
    }
}

int main()
{
    findOperators();
    return 0;
}
