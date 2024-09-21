#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    int cnt = 0;
    for (int i = 1; i * i <= num; i++) {  // Corrected the loop to check divisors
        if (num % i == 0) {
            cnt++;
            if (i != num / i) cnt++; // Count the corresponding divisor only if it's different
        }
        if (cnt > 2) return false; // If more than 2 divisors, return false early
    }
    return cnt == 2; // A prime number should have exactly 2 divisors
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
