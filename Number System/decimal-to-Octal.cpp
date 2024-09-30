#include<bits/stdc++.h>
using namespace std;

string solve(int n){
    string octal ="";

    while(n > 0){
        int last = n % 8;
        octal += to_string(last);
        n = n / 8;
    }
    reverse(octal.begin(), octal.end());

    return octal;
}

int main(){
    int decimal;
    cin>>decimal;
    
    string ans = solve(decimal);
    cout<<ans<<endl;
    return 0;
}