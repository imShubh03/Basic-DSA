#include <bits/stdc++.h>
using namespace std;

void insertAtStart(int arr[], int n, int val) {
    // Shift all array elements
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = val;
}

void insertAtEnd(int arr[], int n, int val) {
    // Add the new value at the end of the array
    arr[n+1] = val;
}


int main() {
    int n;
    cin >> n;

    int arr[n + 2];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int val;
    cin >> val;

    insertAtStart(arr, n, val);

    // Print array after insertion at start
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert at end
    cin >> val;
    insertAtEnd(arr, n, val);

    // Print array after insertion at end
    for (int i = 0; i <= n+1; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
