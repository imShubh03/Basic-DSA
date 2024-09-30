#include<bits/stdc++.h>
using namespace std;

/*
int solve(string &s){
    int n = s.length();
    int base =1;
    int ans = 0;
    for(int i = n-1; i>=0; i--){
        if(s[i] == '1'){
            ans += base;
        }
        base *= 2;
    }
    return ans;
}
*/

int solve(string &s){
    int ans = stoi(s, 0 , 2);
    return ans;
}

int main(){
    string s;
    getline(cin, s);

    int ans = solve(s);
    cout<<ans<<endl;

    return 0;
}