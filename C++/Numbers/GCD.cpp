#include <bits/stdc++.h>
using namespace std;

/*
int findGCD(int a, int b) {
    for (int i = min(a, b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
            break;
        }
    }
    // GCD of any number with 0 is the number itself
    return 1; 
}
*/

int findGCD(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a==0) return b;
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = findGCD(a, b);
    cout << ans << endl;

    return 0;
}
