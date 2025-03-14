#include<bits/stdc++.h>
using namespace std;

string removevowels(string &str){
    int n = str.size();
    string ans="";
    
    for(int i =0; i<n; i++){
        char ch = str[i];

        if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')){
            ans += ch;
        }
    }
    return ans;
}

int main(){
    string str;
    getline(cin, str);

    string ans = removevowels(str);
    cout<<ans<<endl;

    return 0;
}
