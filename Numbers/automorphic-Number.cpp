#include <bits/stdc++.h>
using namespace std;

bool automorphic(int n){
    int sq = n*n;
    while(n>0){
        if(n % 10 != sq % 10 ){
            return false;
        }
        n = n/10;
        sq = sq / 10;
    }
    return true;
}

int main() {
    int n;
    cin>>n;

    bool ans = automorphic(n);
    if(ans){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}