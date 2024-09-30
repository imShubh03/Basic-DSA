#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    
    int ans[32] = {0};
    int i =0;
    while(n > 0){
        int last = n % 2;
        ans[i] = last;
        i++;
        n = n /2;
    }
    for(int j = i-1; j>=0; j--){
        cout<<ans[j];
    }
    cout<<"\n";
}

int main() {
    int n;
    cin >> n;

    solve(n);

    return 0;
}
