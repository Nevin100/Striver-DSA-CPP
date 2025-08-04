// Q.) Remove the duplicates in the array

// Approach : --> Brute : Just use Set and push the element of array in set as set only takes unique values.
           // --> Optimal : Two pointers Alogirthm will be observed.

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout << "Enter the number of elements :";
  cin >> n;

  vector<int> arr(n);
  for(int i = 0; i <= n-1;i++ ){
    cout << "Enter the element at index " << i << " ";
    cin >> arr[i];
  }

  int i = 0;
  for(int j = i;j < n; j++){
    if (arr[i] != arr[j]){
      arr[i+1] = arr[j];
      i++;
    }
  }
  cout<< " The Number of unique Elements : " << i+1;
  return 0;
}
