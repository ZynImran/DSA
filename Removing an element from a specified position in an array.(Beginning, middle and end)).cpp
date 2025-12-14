#include <iostream>
using namespace std;

int main() {
    int n, pos;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter position to delete (1-based): ";
    cin >> pos;
    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    cout << "Array after deletion:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

