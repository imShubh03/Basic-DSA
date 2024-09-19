#include <bits/stdc++.h>
using namespace std;

/*
void rotateByOne(int arr[], int n) {
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
void rotateArray(int arr[], int n, int k) {
    k = k % n;  // If k > n, reduce it to a valid rotation
    for (int i = 0; i < k; i++) {
        rotateByOne(arr, n);
    }
}
*/

// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

void rotateArray(int arr[], int n, int k) {
    k = k % n;  // In case k is larger than n
    
    // REVERSE USING INBUILT METHOD

    // Step 1: Reverse the entire array
    reverse(arr, arr + n);
    
    // Step 2: Reverse the first k elements
    reverse(arr, arr + k);
    
    // Step 3: Reverse the remaining n-k elements
    reverse(arr + k, arr + n);
}

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    rotateArray(arr, n, k);

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}