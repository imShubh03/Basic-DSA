#include<bits/stdc++.h>
using namespace std;

string removespaces(string &s){
    int n =s.length();
    string ans ="";
    for(int i =0; i<n; i++){
        char ch = s[i];

        if(!(ch == ' ')){
            ans += ch;
        }
    }
    return ans;
}

int main(){
    string s;
    getline(cin, s);
    string ans = removespaces(s);
    cout<<ans<<endl;

    return 0;
}