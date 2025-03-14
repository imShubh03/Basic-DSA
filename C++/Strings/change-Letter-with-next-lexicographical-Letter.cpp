#include <bits/stdc++.h>
using namespace std;

string solve(string &s){
    int n = s.size();

    for(int i =0; i<n; i++){
        int ascii = (int)s[i];

        if(ascii== 90){
            s[i]= char(65);
        }
        else if(ascii == 122){
            s[i] = char(97);
        }
        else if((ascii >=65 && ascii <90) || (ascii >= 97 && ascii <122)){
            s[i]= char(ascii + 1);
        }
    }
    return s;
}

int main() {
    string s;

    getline(cin, s);

    string ans = solve(s);
    cout<<ans<<"\n";

    return 0;
}