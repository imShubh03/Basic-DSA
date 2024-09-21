#include <bits/stdc++.h>
using namespace std;

pair<int, int>solve(int n){
    int lastdigit;
    int maxi = INT_MIN;
    int mini = INT_MAX;

    while(n>0){
        lastdigit = n % 10;
        mini = min(mini, lastdigit);
        maxi = max(maxi, lastdigit);
        n = n /10;
    }
    return {mini, maxi};
}

int main() {
    int n;
    cin>>n;

    pair<int, int>ans = solve(n);
    cout<<ans.first<<" "<<ans.second<<endl;

    return 0;
}