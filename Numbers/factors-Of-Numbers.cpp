#include <bits/stdc++.h>
using namespace std;

/*
void factors(int n){
    for(int i =1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
*/

void factors(int n){
    for(int i =1; i<=n; i++){
        if(n % i == 0 && i != (n/i)){
            cout<<i<<" ";
        }
    }
}

int main() {
    int n;
    cin>>n;
    factors(n);
    return 0;
}