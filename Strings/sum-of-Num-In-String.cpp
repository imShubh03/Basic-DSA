#include <bits/stdc++.h>
using namespace std;

int findSum(string &s){
    int n = s.length();
    int num =0;
    int sum = 0;

    for(int i =0; i<n; i++){
        if(isdigit(s[i])){
            num  = num * 10 + (s[i] - '0');
        }
        else{
            sum += num;
            num =0;
        }
    }
    int ans = num + sum;  // if last ele is num then add that also
    return ans;
}

int main() {
    string s;
    getline(cin, s);

    int ans= findSum(s);
    cout<<ans<<endl;
    return 0;
}