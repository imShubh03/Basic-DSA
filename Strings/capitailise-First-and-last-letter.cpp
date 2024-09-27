#include <bits/stdc++.h>
using namespace std;

string capitalise(string &s) {
    int n = s.length();
    string ans = "";

    for (int i = 0; i < n; i++) {
        // If it's the start of a word
        if (i == 0 || s[i - 1] == ' ') {
            ans += toupper(s[i]); // Capitalize the first character
        } else {
            ans += s[i]; // Append the character as it is
        }
        
        // If it's the end of a word
        if ((i + 1 == n) || (s[i + 1] == ' ' && i + 1 < n)) {
            // Capitalize the last character of the word
            ans.back() = toupper(ans.back());
        }
    }
    return ans; // Return the modified string
}

int main() {
    string s;
    getline(cin, s); // Read the input string

    string res = capitalise(s); // Call the function
    cout << res << endl; // Output the result

    return 0; // End of the program
}
