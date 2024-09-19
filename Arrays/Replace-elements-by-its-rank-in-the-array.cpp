#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> dummy = arr;
        sort(dummy.begin(), dummy.end());

        // map to store ranks
        map<int, int> mp;
        int rank = 1;

        // Assign rank to each element in sorted array
        for (int i = 0; i < n; i++) {
            if (mp.find(dummy[i]) == mp.end()) { // fix here
                mp[dummy[i]] = rank;
                rank++;
            }
        }

        // Prepare result array
        vector<int> res(n);

        // Replace elements by their ranks using the map
        for (int i = 0; i < n; i++) {
            res[i] = mp[arr[i]]; // fix here
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {20, 15, 10, 25, 30};
    vector<int> result = sol.arrayRankTransform(arr);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
