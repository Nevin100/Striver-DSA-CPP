// Insertion Sort : Takes an element and place it in correct Order.

//Complexities : Avg == Worst ==> O(N^2) & Best : O(N)

#include<iostream>
using namespace std;

// Insertion Sort Function
void insertion_sort(int arr[], int n){
    for(int i = 0; i <= n - 1; i++){
      int j = i;
      while(j > 0 && arr[j-1] > arr[j])
      {
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
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
    insertion_sort(arr, n);

    // Display sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
