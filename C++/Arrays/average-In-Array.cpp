#include <bits/stdc++.h>
using namespace std;

int findAvg(int arr[], int n){
    double sum =0;

    for(int i =0;i<n; i++){
        sum += (double)arr[i];
    }

    double avg = sum / n;

    return avg;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int res = findAvg(arr, n);
    cout<<res<<endl;

    return 0;
}