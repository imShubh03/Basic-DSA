#include <bits/stdc++.h>
using namespace std;

double maxOfThree(double a, double b, double c) {
    return max(a, max(b, c));
}

int main() {
    double a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    double maxNum = maxOfThree(a, b, c);

    cout << "The maximum of the three numbers is: " << maxNum << endl;

    return 0;
}
