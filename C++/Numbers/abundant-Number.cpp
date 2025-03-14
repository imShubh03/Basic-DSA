#include <bits/stdc++.h>
using namespace std;

bool isAbundant(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) { // Start from 1, not 0
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum > n; // An abundant number has a sum of divisors greater than itself
}

int main() {
    int n;
    cin >> n;

    bool ans = isAbundant(n);

    if (ans) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
