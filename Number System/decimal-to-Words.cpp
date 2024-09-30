#include<bits/stdc++.h>
using namespace std;

void solve(string &s){
    int n = s.length();
    

    string tens[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string twenties[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string hundred[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string thousands[] = {"hundred", "thousand"};

    if(n == 0){
        cout<<"empty input"<<endl;
        return;
    }

    if(n ==1 ){
        cout<<tens[s[0]- '0'] <<endl;
        return;
    }

    int i =0;

    if(n == 4){
        cout<<tens[s[i] - '0'] <<" thousand ";
        i++;
        n--;
    }

    if(n == 3){
        if(s[i] - '0' != 0){
            cout<< tens[s[i] - '0']<<" hundred ";
        }
        i++;
        n--;
    }

    if(n == 2){
        if(s[i] - '0' == 1){ // for cases 10 to 19
            cout<< twenties[s[i+1] - '0'] <<endl;
            return;
        }
        else if(s[i] - '0' != 0){
            cout<< hundred[s[i] - '0'] << " ";
        }
        i++;
        
    }

    //last digit
    if(s[i] - '0' != 0){
        cout<<tens[s[i] - '0'] <<endl;
    }
}

int main(){
    string s;
    getline(cin, s);

    solve(s);

    return 0;
}