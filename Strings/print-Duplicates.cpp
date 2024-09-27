#include <bits/stdc++.h>
using namespace std;

void solve(string &s) {
    int n = s.length();

    map<char, int> mp;
    for (char &ch : s) {
        mp[ch]++;
    }

    for (auto it : mp) { // Change 'map' to 'mp'
        if (it.second > 1) {
            cout << it.first << " " << it.second << "\n"; 
        }
    }
}

int main() {
    string s;
    getline(cin, s);

    solve(s);

    return 0;
}
