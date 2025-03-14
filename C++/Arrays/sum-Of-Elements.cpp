#include <bits/stdc++.h>
using namespace std;

/*
int solve(int arr[], int n){
    int sum =0; 
    for(int i =0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
*/

int solve(int arr[], int n){
    int initialSum =0;
    int sum = accumulate(arr, arr+n, initialSum);
    return sum;
}

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int ans = solve(arr, n);
    cout<<ans<<endl;

    return 0;
}