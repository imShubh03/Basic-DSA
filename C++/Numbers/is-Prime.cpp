#include <bits/stdc++.h>
using namespace std;

/*
bool isPrime(int n){
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
    if (cnt == 2) {
        return true;
    } else {
        return false;
    }
}
*/


bool isPrime(int n) {
    if (n < 2) return false;
    
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) { // Use <= sqrt(n)
        if (n % i == 0) {
            cnt++;
            if (i != n / i) cnt++; // Avoid double counting the square root
        }
        if (cnt > 2) return false; // If more than 2 divisors, it's not prime
    }
    return cnt == 2;
}



int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
