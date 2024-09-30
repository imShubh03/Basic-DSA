#include<bits/stdc++.h>
using namespace std;

string solve(string &s){
    int n = s.size();

    for(int i =0; i<n; i++){
        int ascii = (int)s[i];

        if(ascii >= 65 && ascii <=90){
            // if uppercase
            s[i]= ((char)(ascii + 32));
        }
        else if(ascii >=97 && ascii <=122){
            s[i]= ((char)(ascii - 32));
        }
    }
    return s;
    
}

int main(){
    string s;
    getline(cin,s);

    string ans = solve(s);
    cout<<ans<<"\n";
}