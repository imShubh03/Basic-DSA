#include <bits/stdc++.h>
using namespace std;

/*
bool isAnagram(string &s1, string &s2){
    int n = s1.length();
    if(s1.length() != s2.length()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for(int i =0; i<n; i++){
        if(s1[i] != s2[i]) return false;

    }
    return true;
}
*/

bool isAnagram(string &s1, string &s2){
    int n = s1.length();
    if(s1.length() != s2.length()) return false;

    int freq[26] ={0};

    for(int i =0; i<n; i++){
        freq[s1[i] - 'a']++;
    }
    for(int i =0; i<n; i++){
        freq[s2[i] - 'a']--;
    }
    for(int i =0; i<26; i++){
        if(freq[i] != 0) return false;
    }
    return true;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if(isAnagram(s1, s2)){
        cout<<"yes"<<" ";
    }
    else{
        cout<<"no"<<" ";
    }

    return 0;
}