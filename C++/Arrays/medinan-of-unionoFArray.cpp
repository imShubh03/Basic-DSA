#include<bits/stdc++.h>
using namespace std;

double solve(int a[], int m, int b[], int n){

    sort(a, a +m);
    sort(b, b+ n);
    double res;
    vector<int>ans;
    int i =0; 
    int j =0;

    while(i<m && j<n){
        if(a[i] <= b[j]){
            if(ans.empty() || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.empty() || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i < m){
        if(ans.empty() || ans.back() != a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }

    while(j<n){
        if(ans.empty() || ans.back() != b[j]){
            ans.push_back(b[j]);
        }
        j++;
    }
    // finding the median
    int len = ans.size();

    if(len % 2 ==0){
        int idx = len/2;
        res = ((ans[idx] + ans[idx -1])/2.0);
    }
    else{
        res = ans[len/2];
    }
    return res;
}

int main(){

    int m, n;
    cin>>m;
    cin>>n;

    int a[m], b[n];

    for(int i =0; i<m; i++){
        cin>>a[i];
    }
    for(int i =0;i<n; i++){
        cin>>b[i];
    }

    double median = solve(a, m, b, n);

    cout<<median<<endl;


    return 0;
}