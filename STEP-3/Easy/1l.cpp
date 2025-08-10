// Q.) Longest Sub Array with sum k {Positives}

//SubArray : Contiguous part of array
//Approach : Brute :--> Generate All Sub Arrays, and use 3 ointers to have all posible sub arrays and make sure to compare the length be max and sum is equivalent to what asked.
          // Better :--> Use hashmap and have a variable to track the prefix sum and fir compare krte rho ki length max acieve hui??
          //Optimal :-->

#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    int n = arr.size();
    int l = 0, r = 0;
    long long sum = 0;
    int maxLen = 0;

    while (r < n) {
        sum += arr[r]; // add current element to sum

        // shrink window from left if sum exceeds k
        while (sum > k && l <= r) {
            sum -= arr[l];
            l++;
        }

        // if sum equals k, update maxLen
        if (sum == k) {
            maxLen = max(maxLen, r - l + 1);
        }

        r++;
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 1, 1, 1, 3, 2};
    int k = 3;
    cout << "Longest length: " << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
