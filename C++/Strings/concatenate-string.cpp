#include <bits/stdc++.h>
using namespace std;

/*
string solve(string &s1, string &s2){
    string res = s1 + s2;
    return res;
}
*/

string solve(string &s1, string &s2){
    return s1.append(s2);
}
int main() {
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    string ans = solve(s1, s2);

    cout<<ans<<endl;


    return 0;
}