#include <bits/stdc++.h>
using namespace std;

/*
bool isPrime(int n) {
    int cnt = 0; 
    for (int i = 1; i <= n; i++) { 
        if (n % i == 0) {
            cnt++; 
        }
    }
    return cnt == 2; 
}
void primefactors(int n) {
    for (int i = 2; i <= n; i++) { 
        if (n % i == 0 && isPrime(i)) {
            cout << i << " "; 
        }
    }
}
*/

bool isPrime(int n) {
    if (n <= 1) return false;
    
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) cnt++;
        }
    }
    return cnt == 2;
}
void primefactors(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            cout << i << " ";
        }
    }
    
}

int main() {
    int n;
    cin >> n;

    primefactors(n); // Call function to find and print prime factors

    return 0;
}
