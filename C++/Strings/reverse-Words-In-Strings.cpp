#include <bits/stdc++.h>
using namespace std;

string solve(string &s) {
    int n = s.size();

    stack<string> st;
    string str = "";
    
    for(int i = 0; i < n; i++) {
        if(s[i] == ' ') {
            st.push(str);
            str = "";
        } else {
            str += s[i];
        }
    }

    if(!str.empty()) {  
        st.push(str);
    }

    string ans = "";
    while(!st.empty()) {
        ans += st.top();
        st.pop();
        if(!st.empty()) {
            ans += " ";
        }
    }

    return ans;
}

int main() {
    string s;
    getline(cin, s);

    string ans = solve(s);
    cout << ans << endl;

    return 0;
}
