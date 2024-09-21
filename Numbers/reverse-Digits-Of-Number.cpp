#include <bits/stdc++.h>
using namespace std;

int reverseDigit(int n){
    int cpy = n;
    int ans = 0;
    while(cpy > 0){
        int lastdigit = cpy % 10;
        ans = ans * 10 + lastdigit;
        cpy = cpy / 10;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    int ans = reverseDigit(n);
    cout << ans << endl;

    return 0;
}
