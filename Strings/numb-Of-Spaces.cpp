#include <bits/stdc++.h>
using namespace std;

int solve(string &s){
    int n = s.length();

    int cnt = 0;

    for(int i =0; i<n; i++){
        if(s[i] == ' ') cnt++;
    }

    return cnt+1;
}

int main() {
    string s;
    getline(cin, s);
    
    int ans = solve(s);
    cout<<ans<<"\n";

    return 0;
}