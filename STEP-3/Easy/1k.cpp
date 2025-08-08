// Q.) Maximum consecutive ones : 

// Approach --> just have a count variable and max variable with 0 as initial values.. now just iterate the array and increment the counter count by 1 and simultaneously maximum variable.. if any break occurs, just make counter 0 and compare further with max and count variable value

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    int maximum = 0;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
      if(arr[i] == 1){
        count++;
        maximum = max(count, maximum);
      }else{
        count = 0;
      }
    }

    cout << "The maximum occurence of one is :" << maximum<< endl;
  return 0;
}