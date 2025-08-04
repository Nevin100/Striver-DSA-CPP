// Check if array is sorted or not : 

// Approach : --> Just check whether the next element is equal to or bigger than the current index element , if yes then true; else false;

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout << "Enter the number of elements :";
  cin >> n;

  vector<int> arr(n);
  for(int i = 0; i <= n-1;i++ ){
    cout << "Enter the element at index -" << i << "-  ";
    cin >> arr[i];
  }

  bool result;
  for(int i = 0; i<n; i++){
    if(arr[i] <= arr[i+1] ){
      continue;
    }else{
      result = false;
    }
  }
  result = true;

  if(result !=true){
    cout << "The Array is not Sorted";
  }
  else{
    cout << "The Array is Sorted";
  }

  return 0;
}