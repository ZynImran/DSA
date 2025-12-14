#include <iostream>
using namespace std;

int main() {
    int n, pos, val;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];  
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter position to insert (1-based): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = val;
    n++;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

