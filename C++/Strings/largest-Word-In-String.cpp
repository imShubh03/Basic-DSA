#include <bits/stdc++.h>
using namespace std;

string solve(string &s){
    int n = s.length();
    string largest, current = "";
    for(int i =0; i<n; i++){
        if(s[i] == ' '){
            if(current.length() > largest.length()){
                largest = current;
            }
            current = "";
        }
        else{
            current += s[i];
        }
    }
    return largest;
}

int main() {
    string s;
    getline(cin, s);

    string ans = solve(s);
    cout<<ans<<endl;

    return 0;
}