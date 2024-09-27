#include <bits/stdc++.h>
using namespace std;

int  factorial(int n){
    // base case
    if(n == 0 || n ==1 ){
        return n;
    }
    return n * factorial(n-1);
}

int strongnumber(int n){
    int sum =0;
    int cpy = n;

    while(cpy>0){
        int lastdigit = cpy % 10;
        sum = sum + factorial(lastdigit);
        cpy = cpy/10;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;

    int ans = strongnumber(n);

    if(ans == n){
        cout<<"YES"<<" ";
    }
    else{
        cout<<"NO"<<" ";
    }

    return 0;
}