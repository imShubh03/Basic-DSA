#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of an AP series
double sumOfAP(double a, double d, int n) {
    return (n / 2.0) * (2 * a + (n - 1) * d); // Sum formula
}

int main() {
    double a, d; // Use double for a and d
    int n;

    cin >> a>>d>>n;

    // Calculate the sum
    double sum = sumOfAP(a, d, n);

    // Output the result
    cout << "The sum of the AP series is: " << sum << endl;

    return 0;
}
