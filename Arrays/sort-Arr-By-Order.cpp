#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByOrder(const vector<int>& arr, const vector<int>& order) {
    unordered_map<int, int> freq;  // Frequency map for elements in arr[]
    
    // Step 1: Build the frequency map
    for (int num : arr) {
        freq[num]++;
    }

    vector<int> result;

    // Step 2: Add elements from arr[] according to the order[] array
    for (int num : order) {
        while (freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
    }

    // Step 3: Use multiset to keep the remaining elements sorted
    multiset<int> remaining;
    for (const auto& [key, value] : freq) { // Range-based for loop with structured bindings
        while (value > 0) {
            remaining.insert(key);
            value--;
        }
    }

    // Step 4: Append the remaining sorted elements to the result
    result.insert(result.end(), remaining.begin(), remaining.end());

    return result;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);   // Dynamic allocation using vector
    vector<int> order(m); // Dynamic allocation using vector

    // Read elements for arr
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Read elements for order
    for (int i = 0; i < m; i++) {
        cin >> order[i];
    }

    vector<int> res = sortArrayByOrder(arr, order);

    // Print the result
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
