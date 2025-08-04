// Quick Sort : 

// Time Complexity : O(NlogN) and Space Complexity : O(1) (slightly better than Merge Sort)

// Steps : 
// 1.) Pick a pivot and place it in a correct position in the sorted array.
// 2.) Smaller on the left and bigger on the right.
// 3.) Repeat the steps 1 and 2

#include <iostream>
#include <vector>
using namespace std; // isme swap function present hai

// Partition function - puts pivot in correct place and returns index
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];  // Choosing last element as pivot
    int i = low - 1;        // i tracks the smaller element boundary

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Put pivot in its correct position
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// QuickSort function
void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // Recursively sort both sides
        quickSort(arr, low, pivotIndex - 1);   // Left part
        quickSort(arr, pivotIndex + 1, high);  // Right part
    }
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }

    // Sort the array
    quickSort(arr, 0, n - 1);

    // Display sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
