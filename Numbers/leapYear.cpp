#include <bits/stdc++.h>
using namespace std;

bool solve(int n){
    if((n % 4 == 0) || (n% 100 == 0)){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cin>>n;

    bool ans = solve(n);

    if(ans){
        cout<<"its leap year"<<endl;
    }
    else{
        cout<<"not a leap year"<<endl;
    }

    return 0;
}