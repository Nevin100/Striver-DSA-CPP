// Bubble Sort :

// Steps :1 --> Push the maximum at the last by adjacent swaps.
// Steps :2 --> keep doing and the right side array will be sorted.
// Steps :3 --> Keep following until fisrt index as at first, the lement is smallest.

//Time complexity : Best :O(N) and worst : O(N^2)
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
  for(int i = n-1; i >= 1; i--){
    for(int j = 0; j<=i-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main(){
    // Size of array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Elements of Array
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    // Sort the array
    bubble_sort(arr, n);

    // Display sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}