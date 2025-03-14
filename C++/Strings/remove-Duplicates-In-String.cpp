#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string &s){
    int n = s.length();
    string ans = "";
    vector<bool>vis(26, false);
    for(int i =0; i<n; i++){
        if(vis[s[i] - 'a'] == false){
            ans += s[i];
            vis[s[i] - 'a'] = true;
        }
    }
    return ans;
}

int main() {
    string s;
    getline(cin, s);

    string ans = removeDuplicates(s);
    cout<<ans<<endl;

    return 0;
}