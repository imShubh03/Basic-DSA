#include <bits/stdc++.h>
using namespace std;

void solve(string &str) {
    int vowels = 0, spaces = 0, consonants = 0;

    // Convert every char into lowercase
    for (char &ch : str) {
        ch = tolower(ch);
    }

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        } 
        else if (str[i] == ' ') {
            spaces++;
        } 
        else if(isalpha(str[i])) {  
            consonants++;
        }
    }

    cout << "vowels are " << vowels << endl;
    cout << "spaces are " << spaces << endl;
    cout << "consonants are " << consonants << endl;
}

int main() {
    string str;
    getline(cin, str);  // Input string with spaces

    solve(str);  // Call function to process the string

    return 0;
}
