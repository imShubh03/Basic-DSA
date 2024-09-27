#include <bits/stdc++.h>
using namespace std;

/*
int findLCM(int a, int b) {
    int gcd =1;
    for (int i = min(a, b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }
    int lcm = (a * b)/ gcd;
    return lcm; 
}
*/

int findLCM(int a, int b){
    int prod = a * b;
    while(a>0 && b>0){
        if(a>b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a==0) return prod/b;
    return prod/a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = findLCM(a, b);
    cout << ans << endl;

    return 0;
}
