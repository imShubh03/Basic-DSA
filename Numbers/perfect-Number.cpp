#include <bits/stdc++.h>
using namespace std;

/*
bool isPerfect(int num){
    int sum =0;
    for(int i =1; i<num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum == num;
}
*/

bool perfectNumber(int k) {
    if (k <= 1) return false; // Perfect numbers are greater than 1
    int sum = 1; // Start with 1, since it's a divisor for all numbers

    // Check for divisors up to the square root of k
    for (int i = 2; i * i <= k; i++) {
        if (k % i == 0) {
            sum += i; // Add the divisor
            if (i != k / i) {
                sum += k / i; // Add the corresponding divisor
            }
        }
    }

    return sum == k; // Compare the sum of divisors with k
}

int main() {
    int n;
    cin>>n;

    bool ans = isPerfect(n);

    if(ans){
        cout<<"its perfect"<<endl;
    }
    else{
        cout<<"not perfect"<<endl;
    }

    return 0;
}