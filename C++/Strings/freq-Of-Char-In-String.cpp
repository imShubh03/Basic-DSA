#include <bits/stdc++.h>
using namespace std;

string findfreq(string &s) {
    int n = s.length();
    int freq[26] = {0};
    string ans = ""; // Start with an empty string

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') // Ensure only lowercase letters are processed
            freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if(freq[i] != 0){
            ans += (char)(i + 'a');
            ans+= to_string(freq[i]);
            ans += " ";
        }
    }

    return ans;
}

int main() {
    string s;
    getline(cin, s); // Input the string
    string ans = findfreq(s);
    cout << "Output: " << ans << endl; // Output the result
    return 0;
}
