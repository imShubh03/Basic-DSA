#include <bits/stdc++.h>
using namespace std;

string findalpha(string &s){
    int n = s.length();
    string ans = "";

    for(int i =0; i<n; i++){
        char ch = s[i];
        int val = int(ch);

        if((val>=65 && val<=90) || (val >=97 && val<=122) || val==32){
            ans += ch;
        }
    }
    return ans;
}


int main() {
    string str;

    getline(cin, str);

    string ans = findalpha(str);
    cout<<ans<<endl;

    return 0;
}