#include <bits/stdc++.h>
using namespace std;

/*
vector<int> findNonRepeating(int arr[], int n) {
    vector<int> nonDup;
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            nonDup.push_back(arr[i]);
        }
    }
    return nonDup;
}
*/

/*
vector<int> findNonRepeating(int arr[], int n) {
    vector<int> nonDup;
    sort(arr, arr + n);
    for(int i = 0; i < n; ) {
        if(i == n-1 || arr[i] != arr[i+1]) {
            nonDup.push_back(arr[i]);
            i++;  // Move to the next element
        } else {
            i += 2;  // Skip both elements as they are duplicates
        }
    }
    return nonDup;
}
*/

// Optimal approach: O(n) using hash map
vector<int> findNonRepeating(int arr[], int n) {
    vector<int> nonDup;
    unordered_map<int, int> freq; 
    // Count occurrences of each element
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    // Push elements that appear only once
    for(auto it : freq) {
        if(it.second == 1) {
            nonDup.push_back(it.first);
        }
    }
    return nonDup;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> res = findNonRepeating(arr, n);
    for(auto it : res) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
