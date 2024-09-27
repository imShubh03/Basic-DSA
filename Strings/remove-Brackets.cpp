#include<bits/stdc++.h>
using namespace std;

string removebrac(string &s){
    int n = s.size();
    string ans="";

    for(int i =0; i<n; i++){
        char ch = s[i];

        if(ch == '(' || ch == ')') continue;

        ans += ch;
    }
    return ans;
}

int main(){
    string s;
    getline(cin, s);

    string ans = removebrac(s);
    cout<<ans<<endl;


    return 0;
}