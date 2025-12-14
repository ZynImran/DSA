#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Total even elements = " << evenCount << endl;
    cout << "Total odd elements = " << oddCount << endl;

    return 0;
}

