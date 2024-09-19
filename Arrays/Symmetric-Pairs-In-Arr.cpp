#include <bits/stdc++.h>
using namespace std;

/*
vector<vector<int>> findSymmetricPairs(int arr[][2], int n) {
    vector<vector<int>> ans;
    
    for(int i =0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j][1] == arr[i][0] && arr[j][0] == arr[i][1]){
                ans.push_back({arr[i][0], arr[i][1]});
                break;
            }
        }
    }
    return ans;
}
*/

vector<vector<int>> findSymmetricPairs(int arr[][2], int n) {
    vector<vector<int>>ans;
    unordered_map<int, int>mp;

    for(int i =0; i<n; i++){
        int first = arr[i][0];
        int second = arr[i][1];

        if(mp.count(second) && mp[second] == first){
            ans.push_back({second, first});
        }
        else{
            mp[first] = second;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    int arr[n][2];

    for(int i =0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1];
    }

    vector<vector<int>>res = findSymmetricPairs(arr, n);

    for(auto it : res){
        cout<<"["<<it[0]<<" "<<it[1]<<']'<<endl;
    }



    return 0;
}
