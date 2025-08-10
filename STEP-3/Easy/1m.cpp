// Q.) Longest sub array with sum k including both negatives and positives : 

#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    unordered_map<long long, int> prefixIndex; // sum -> first index
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        if (prefixIndex.find(sum - k) != prefixIndex.end()) {
            maxLen = max(maxLen, i - prefixIndex[sum - k]);
        }

        // store first occurrence only
        if (prefixIndex.find(sum) == prefixIndex.end()) {
            prefixIndex[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, -1, 1, 1, 3, -2, 2};
    int k = 3;
    cout << "Longest length: " << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
