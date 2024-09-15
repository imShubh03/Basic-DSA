#include <bits/stdc++.h>
using namespace std;

/*
int findSecLargest(int arr[], int n){
    int largest = INT_MIN;
    for(int i =0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int seclargest = INT_MIN;
    for(int i =0; i<n; i++){
        if(arr[i]>seclargest && arr[i]< largest){
            seclargest = arr[i];
        }
    }
    return seclargest;
}
*/

int findSecLargest(int arr[], int n){
    if(n<2){
        return -1;
    }

    int largest = INT_MIN;
    int seclargest = INT_MIN;

    for(int i =0; i<n; i++){
        if(arr[i]> largest){
            seclargest = largest;
            largest = arr[i];
        }
        else if(arr[i]> seclargest && arr[i] != largest){
            seclargest = arr[i];
        }
    }
    return seclargest;
}


int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int seclar = findSecLargest(arr, n);
    cout<<seclar<<endl;

    return 0;
}