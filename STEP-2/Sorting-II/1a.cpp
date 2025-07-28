// Merge Sorting : Divide and Merge

//Time Complexity : O(NlogN) and Space Complexity : O(N)
#include <iostream>
#include <vector>
using namespace std;

// 🔁 Merges two sorted subarrays: arr[low..mid] and arr[mid+1..high]
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merge both halves into temp
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements (if any)
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive Merge Sort Function
void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;

    // Divide into halves
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    // Merge sorted halves
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }

    // Call Merge Sort
    mergeSort(arr, 0, n - 1);

    // Output sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
