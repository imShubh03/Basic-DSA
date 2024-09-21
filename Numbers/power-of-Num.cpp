#include <bits/stdc++.h>
using namespace std;

/*
int power(int N, int R) {
    long long ans = 1;  
    for(int i = 0; i < R; i++) {
        ans *= N;  
    }

    return ans % 1000000007;  
}
*/

int power(int N, int R) {
    int mod = 1000000007;
    long long ans = 1;
    long long base = N % mod;  // Handle large base
    
    while (R > 0) {
        if (R % 2 == 1) {  // If R is odd
            ans = (ans * base) % mod;
        }
        base = (base * base) % mod;  // Square the base
        R /= 2;  // Divide R by 2
    }

    return ans;  
}

int main() {
    int N, R;
    cin >> N >> R;

    cout << power(N, R) << endl;

    return 0;
}
