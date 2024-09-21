#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int original = n;
    int reverse = 0;
    while(n>0){
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n/10;
    }

    return (original == reverse);
}

int main() {
    int n;
    cin>>n;

    bool res = isPalindrome(n);

    if(res){
        cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }

    return 0;
}