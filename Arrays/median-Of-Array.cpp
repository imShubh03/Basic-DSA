#include <bits/stdc++.h>
using namespace std;

double findMedian(int arr[], int n){
    //must Sort the array
    sort(arr, arr+n);
    
    // If the number of elements is even
    if(n % 2 == 0){
        int mid1 = n/2;
        int mid2 = (n/2)-1;
        // Return the average of the two middle elements
        return (double)(arr[mid1] + arr[mid2]) / 2;
    }
    // If the number of elements is odd
    else{
        // Return the middle element
        return arr[n/2];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    double res = findMedian(arr, n);
    cout << res << endl;

    return 0;
}
