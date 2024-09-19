#include <bits/stdc++.h>
using namespace std;

/*
bool isSubset(vector<int>& arr1, vector<int>& arr2) {
    for (int num : arr1) {
        bool found = false;
        for (int x : arr2) {
            if (num == x) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}
*/


bool isSubset(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> set(arr2.begin(), arr2.end());

    for (int num : arr1) {
        if (set.find(num) == set.end()) return false;
    }
    return true;
}



int main() {
    int m, n;
    cin >> m >> n;

    vector<int> arr1(m);
    vector<int> arr2(n);

    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    if (isSubset(arr1, arr2)) {
        cout << "Array1 is a subset of Array2" << endl;
    } else {
        cout << "Array1 is not a subset of Array2" << endl;
    }

    return 0;
}
