#include <bits/stdc++.h>
using namespace std;

string solve(string &s){
    int n= s.length();
    // convert binry to decimal and then decomal to octal
    int decimal = 0;
    int base =1;

    for(int i = n-1; i>=0; i--){
        if(s[i] == '1'){
            decimal += base;
        }
        base *= 2;
    }
    string octal = "";
    while(decimal > 0){
        int last = decimal % 8;
        octal += to_string(last);
        decimal /= 8;
    }

    reverse(octal.begin(), octal.end());

    return octal;
}

int main() {
    string s;
    getline(cin, s);

    string ans = solve(s);
    cout<<ans<<endl;

    return 0;
}