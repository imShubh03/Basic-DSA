#include <bits/stdc++.h>
using namespace std;

/*
void reverse(string &s) {
    stack<char> st; // Use char instead of int
    for (char &ch : s) {
        st.push(ch);
    }

    int j = 0; // Initialize j
    while (!st.empty()) {
        char top = st.top(); // Change int to char
        st.pop();
        s[j] = top;
        j++;
    }
}
*/

void reverse(string &s){
    int n = s.size();
    int l =0;
    int r =n-1;

    while(l < r){
        swaps(s[l], s[r]);
        l++;
        r--;
    }
}

int main() {
    string s;
    getline(cin, s);

    reverse(s);
    cout << s << endl; 

    return 0;
}
