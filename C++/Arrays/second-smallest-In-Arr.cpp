#include <bits/stdc++.h>
using namespace std;

/*
int findSecSmallest(int arr[], int n){
    // first find the smallest and then sec smallest
    int smallest = INT_MAX;
    for(int i =0; i<n; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    int secSmallest = INT_MAX;
    for(int i =0;i<n;i++){
        if(arr[i]<secSmallest && arr[i]>smallest){
            secSmallest = arr[i];
        }
    }
    return secSmallest;
}
*/


int findSecSmallest(int arr[], int n){
    if(n<2){
        return -1;
    }
    int smallest = INT_MAX;
    int secSmallest = INT_MAX;

    for(int i =0; i<n; i++){
        if(arr[i]<smallest){
            secSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]< secSmallest && arr[i] != smallest){
            secSmallest = arr[i];
        }
    }

    return secSmallest;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    
    int secSmallest = findSecSmallest(arr, n);
    cout<< secSmallest <<endl;

    return 0;
}