// 2Sum Problem Concept :

// Two Pointer Approach :
// Two Pointer ek pattern/technique hai jo mainly arrays & strings me use hota hai.
// Idea simple hai:
// Array sorted ho ya ek linear scan possible ho, tab hum ek se zyada loop chalane ke bajaye,
// do alag indexes (pointers) ko use karte hain.
// Ye pointers ek hi array ke alag-alag ends se start karte hain (ya kabhi ek hi side se).
// Har step pe pointers ko move karte hain based on condition.
//
// Agar sum chhota hai → left pointer aage badhao.
// Agar sum bada hai → right pointer peeche le aao.
// Agar equal hai → answer mil gaya.
// 👉 Isse time complexity O(n) hota hai, jabki brute force me O(n²).

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void getArray(vector<int>& nums, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> nums[i];
    }
}

void SortingArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());
}

vector<int> twoSum(vector<int>& nums, int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {nums[left], nums[right]};
        } 
        else if (sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }
    return {-1, -1}; 
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int target;
    cout << "Enter the Target: ";
    cin >> target;

    vector<int> arr(n);
    getArray(arr, n);

    SortingArray(arr);

    vector<int> ans = twoSum(arr, n, target);

    if (ans[0] == -1) {
        cout << "No such pair exists." << endl;
    } else {
        cout << "Pair found: " << ans[0] << " and " << ans[1] << endl;
    }

    return 0;
}
