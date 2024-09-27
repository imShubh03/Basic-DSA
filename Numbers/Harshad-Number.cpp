#include <bits/stdc++.h>
using namespace std;

bool isharshadNumber(int n){
    int num = n;
    int sum = 0;
    while(n > 0){
        int lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n /10;
    }

    return (num % sum == 0);
}

int main() {
    int n;
    cin>>n;

    bool ans = isharshadNumber(n);

    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}