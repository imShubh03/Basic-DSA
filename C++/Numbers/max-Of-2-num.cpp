#include <bits/stdc++.h>
using namespace std;

/*
double maxOfTwo(double a, double b) {
    return (a > b) ? a : b; 
}
*/

double maxOfTwo(double a, double b) {
    return max(a, b);
}

int main() {
    double a, b;

    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Calculate the maximum
    double maxNum = maxOfTwo(a, b);

    // Output the result
    cout << "The maximum of the two numbers is: " << maxNum << endl;

    return 0;
}
