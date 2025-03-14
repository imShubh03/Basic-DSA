#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    unordered_set<int> s;
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) == s.end()) {
            s.insert(arr[i]);
            arr[index] = arr[i];
            index++;
        }
    }
    
    return index; // Return the new size of the array
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newSize = removeDuplicates(arr, n);
    cout<<newSize<<endl;

    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}