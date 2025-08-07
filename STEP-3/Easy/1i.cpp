#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1;
    cout << "Enter the size of array 1: ";
    cin >> n1;

    int n2;
    cout << "Enter the size of array 2: ";
    cin >> n2;

    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++) {
        cout << "Enter the elements (in sorted manner) at the index " << i << " of the array 1: ";
        cin >> arr1[i];
    }

    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++) {
        cout << "Enter the elements (in sorted manner) at the index " << i << " of the array 2: ";
        cin >> arr2[i];
    }

    // Two-pointer approach:
    vector<int> unionArr;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        // Skip duplicates in arr1
        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }
        // Skip duplicates in arr2
        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }

        if (arr1[i] < arr2[j]) {
            unionArr.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            unionArr.push_back(arr2[j]);
            j++;
        } else {
            unionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < n1) {
        if (i == 0 || arr1[i] != arr1[i - 1])
            unionArr.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements from arr2
    while (j < n2) {
        if (j == 0 || arr2[j] != arr2[j - 1])
            unionArr.push_back(arr2[j]);
        j++;
    }

    // Print the union
    cout << "\nUnion of the two arrays is:\n";
    for (int val : unionArr) {
        cout << val << " ";
    }

    return 0;
}
