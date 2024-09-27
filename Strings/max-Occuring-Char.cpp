#include <bits/stdc++.h>
using namespace std;

char solve(string &s) {
    int n = s.length();
    char ans;
    int freq[26] = {0};
    int maxfreq = 0;

    // Calculate the frequency of each character
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    // Find the character with the maximum frequency
    for(int i =0; i<n; i++){
        if(freq[s[i] - 'a'] > maxfreq){
            maxfreq = freq[s[i] - 'a'];
            ans = s[i];
        }
    }

    return ans;
}

int main() {
    string s;

    getline(cin, s);

    char ans = solve(s);
    cout << ans << endl; // Output the result

    return 0;
}
