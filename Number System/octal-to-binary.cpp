#include <bits/stdc++.h>
using namespace std;

int solve(int oct) {
    int decimal = 0;
    int base = 1;
    while (oct > 0) {
        int last = oct % 10; // Use 'oct' instead of 'octal'
        decimal += last * base;
        oct = oct / 10;
        base *= 8;
    }

    
    string binary = "";
    if (decimal == 0) return 0; // Return 0 if decimal is 0

    while (decimal > 0) {
        int last = decimal % 2; // Change to modulus 2 for binary
        binary = to_string(last) + binary; // Prepend to construct binary correctly
        decimal = decimal / 2; // Divide by 2
    }

    return stoi(binary); // Return the binary as an integer
}

int main() {
    int oct;
    cin >> oct;

    int ans = solve(oct);
    cout << ans << endl;

    return 0;
}
