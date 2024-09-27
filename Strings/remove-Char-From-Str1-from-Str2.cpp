#include <bits/stdc++.h>
using namespace std;

string solve(string &s1, string &s2){
    string ans ="";
    
    for(int i =0; i<s1.length(); i++){
        bool flag =0;
        for(int j =0; j<s2.length(); j++){
            if(s1[i] == s2[j]){
                flag = 1;
            }
        }
        if(!flag){
            ans += s1[i];
        }
    }
    return ans;
}

int main() {
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    string ans = solve(s1, s2);
    cout<<ans<<"\n";


    return 0;
}