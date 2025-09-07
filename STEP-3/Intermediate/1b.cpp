// Sort an array 0's, 1's and 2's:

// Dutch National Flag Algorithm :
// Dutch National Flag Algorithm ka naam isliye pada kyunki Netherlands ke flag me 3 colors hote हैं (Red, White, Blue).
// Array ke 3 values (0,1,2) ko inhi colors ki tarah treat kiya jata hai.
// 3 Pointers use karte hain:

// low → starting se track karega ki 0 (red) kahaan tak aa gaya hai.

// mid → current element ko check karega.

// high → end se track karega ki 2 (blue) kahaan tak aa gaya hai.

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

int main(){
  int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int target;
    cout << "Enter the Target: ";
    cin >> target;

    vector<int> arr(n);
    getArray(arr, n);
    
  return 0;
}