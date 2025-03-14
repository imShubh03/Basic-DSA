#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int orig = n;
    int rev = 0;

    while(n>0){
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n = n / 10;
    }
    return (orig == rev);
}

int main() {
    int min, max;
    cin>>min>>max;

    for(int i = min; i<=max; i++){
        if(isPalindrome(i)){
            cout<< i <<" ";
        }
    }

    return 0;
}