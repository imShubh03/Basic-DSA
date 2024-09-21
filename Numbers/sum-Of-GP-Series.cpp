#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of a GP series
double sumOfGP(double a, double r, int n) {
    if (r == 1) {
        return a * n; // If the common ratio is 1
    }
    return a * (1 - pow(r, n)) / (1 - r); // Sum formula for GP
}

int main() {
    double a, r; // Use double for a and r
    int n;

    // Taking input from the user
    cin >> a >> r >> n;

    // Calculate the sum
    double sum = sumOfGP(a, r, n);

    // Output the result
    cout << "The sum of the GP series is: " << sum << endl;

    return 0;
}
