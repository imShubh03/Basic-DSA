#include<bits/stdc++.h>
using namespace std;

string solve(string &a, string &b){
    string res = "";
    unordered_set<char>set(b.begin(), b.end());

    for(char c : a){
        if(!set.count(c)){
            res += c;
        }
    }
    return res;
}

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);

    string ans = solve(a, b);
    cout<<ans<<endl;
}
