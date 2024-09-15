#include <bits/stdc++.h>
using namespace std;

void findfrequency(int arr[], int n){
    unordered_map<int,int>mp;

    for(int i =0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    findfrequency(arr, n);

    return 0;
}