#include <bits/stdc++.h>
using namespace std;

int solve(int oct) {
    int ans = 0; // Initialize the answer to 0
    int base = 1; // Initialize base to 1 (8^0)

    while (oct > 0) {
        int last = oct % 10; // Get the last digit
        ans += last * base; // Add the value of the last digit
        oct = oct / 10; // Remove the last digit
        base = base * 8; // Update the base (8^1, 8^2, ...)
    }

    return ans; // Return the computed decimal value
}

int main() {
    int oct;
    cin >> oct; // Input octal number

    int ans = solve(oct); // Call the solve function
    cout << ans << endl; // Output the result

    return 0;
}
