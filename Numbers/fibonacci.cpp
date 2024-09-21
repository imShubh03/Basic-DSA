#include <bits/stdc++.h>
using namespace std;

/*
vector<int> fibonacci(int n) {
    vector<int> ans;
    if(n == 0) {
        ans.push_back(0);
    } 
    else if(n == 1) {
        ans.push_back(0); // First Fibonacci number is 0
        ans.push_back(1); // Second Fibonacci number is 1
    }
    else {
        ans.push_back(0);
        ans.push_back(1);
        for(int i = 2; i < n; i++) {
            int next = ans[i-1] + ans[i-2];
            ans.push_back(next);
        }
    }
    return ans;
}
*/

int recurfibonacci(int n){
    //base case
    if(n<=1) return n;

    return recurfibonacci(n-1) + recurfibonacci(n-2);
}

int main() {
    int n;
    cin >> n;

    // vector<int> res = fibonacci(n);
    
    // for(auto it : res) {
    //     cout << it << " ";
    // }

    int recurRes = recurfibonacci(n);
    cout<<recurRes<<endl;

    return 0;
}
