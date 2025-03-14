#include <bits/stdc++.h>
using namespace std;

/*
vector<int> findRepeating(int arr[], int n) {
    vector<int> dup;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) { 
            if(arr[i] == arr[j]) {
                dup.push_back(arr[j]);  
                break; 
            }
        }
    }
    return dup;
}
*/

/*
vector<int> findRepeating(int arr[], int n){
    vector<int>dup;
    sort(arr, arr+n);
    for(int i =0; i<n; i++){
        if(arr[i] == arr[i+1]){
            dup.push_back(arr[i]);
        }
    }
    return dup;
}
*/

vector<int> findRepeating(int arr[], int n) {
    vector<int> dup;
    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;  // Count occurrences of each element
    }
    for(auto it : freq) {
        if(it.second > 1) {
            dup.push_back(it.first);  // Push elements that appear more than once
        }
    }

    return dup;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> res = findRepeating(arr, n);
    for(auto it : res) {
        cout << it << " ";
    }

    return 0;
}
