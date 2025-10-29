#include <iostream>
#include <string>
using namespace std;
void averageOfArray() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], sum = 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average: " << (float)sum / n << endl;
}