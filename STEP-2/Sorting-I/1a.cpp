// Selection Sort :

// Steps :1 --> Select Minimum and swap them to the first one.
// Steps :2 --> Select second minmum from right side and do again
// Steps :3 --> Keep following until last index as at last it would be maximum element

//Complexities : Avg == Best == Worst ==> O(n^2)
#include<iostream>
using namespace std;

// Selection Sort Function
void selection_sort(int arr[], int n){
    for(int i = 0; i <= n - 2; i++){
        int minimum = i;
        for(int j = i; j <= n - 1; j++){
            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }
        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr, n);

    // Display sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
