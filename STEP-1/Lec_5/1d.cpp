// Revserse of an Array using Recursion :

#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, 0, n - 1); 

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
