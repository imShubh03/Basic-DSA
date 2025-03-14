#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    sort(arr, arr+n);

    for(int i =0; i< n/2; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=n-1; i>=n/2; i--){
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    solve(arr, n);

    return 0;
}