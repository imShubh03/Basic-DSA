#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str){
    int l =0; 
    int r = str.size() -1;

    while(l<r){
        if(str[l] != str[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main(){

    string str;
    getline(cin, str);

    bool ans = isPalindrome(str);

    if(ans){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}