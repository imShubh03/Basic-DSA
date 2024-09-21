#include <bits/stdc++.h>
using namespace std;

/*
int factorial(int n) {
    int ans = 1;
    for(int i = 1; i <= n; i++) { 
        ans = ans * i;
    }
    return ans;
}
*/

int factorial(int n){
    //base case
    if(n==0) return 1;

    return n* factorial(n-1);
}

int main() {
    int n;
    cin >> n;

    int res = factorial(n);
    cout << res << endl;

    return 0;
}
