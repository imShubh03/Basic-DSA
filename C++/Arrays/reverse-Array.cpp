#include <bits/stdc++.h>
using namespace std;

/*
void reverseArr(int arr[], int n) {
    int ans[n];
    for (int i = 0; i < n; i++) {
        ans[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
*/


void reverseArr(int arr[], int n){
    int s=0;
    int e = n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n; 
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArr(arr, n);

    return 0;
}
