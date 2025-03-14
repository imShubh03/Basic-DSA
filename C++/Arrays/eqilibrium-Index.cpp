#include <bits/stdc++.h>
using namespace std;

/*
int findEquilInd(int arr[], int n){
    for(int i =0; i<n; i++){
        int leftSum = 0, rightSum =0;

        for(int j=0; j<i; j++){
            leftSum += arr[j];
        }
        for(int j =i+1; j<n; j++){
            rightSum += arr[j];
        }

        if(leftSum == rightSum){
            return i;
        }
    }
    return -1;
}
*/

int findEquilInd(int arr[], int n){
    int totalSum =0;
    for(int i =0; i<n; i++){
        totalSum += arr[i];
    }
    int leftsum =0, rightsum =  totalSum;
    for(int i =0; i<n; i++){
        rightsum -= arr[i];

        if(leftsum == rightsum){
            return i;
        }

        leftsum += arr[i];
    }
    return -1;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int res = findEquilInd(arr, n);
    cout<<res<<endl;

    return 0;
}