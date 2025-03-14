#include <bits/stdc++.h>
using namespace std;

void solve(string &s){
    int n = s.length();
    int freq[200] = {0};

    for(int i =0; i<n; i++){
        if(s[i]==' '){
            continue;
        }
        else{
            freq[s[i] - 'a']++;
        }
    }

    for(int i =0; i<n; i++){
        if(freq[s[i] - 'a'] == 1 && s[i] != ' '){
            cout<< s[i] <<" ";
        }
    }
}

int main() {
    string s;
    getline(cin, s);

    solve(s);

    return 0;
}