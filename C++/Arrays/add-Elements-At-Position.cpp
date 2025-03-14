#include <bits/stdc++.h>
using namespace std;

void insertAtPosition(int arr[], int n, int pos, int val) {
    // shift all elements until position
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = val;
}

int main() {
    int n;
    cin >> n;

    int arr[n + 1];  // Declare array with size n+1 to accommodate the new element
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int val, pos;
    cin >> val >> pos;

    insertAtPosition(arr, n, pos, val);

    // Print the new array
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
