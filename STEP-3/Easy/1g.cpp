//Q.)Move all zeroes to the end of the array;
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout << "Enter the size of an array :";
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++){
    cout << "Enter the element at the index " << i << ": ";
    cin >> arr[i];
  }

  int j = -1;
  for(int i = 0; i<n; i++){
    if(arr[i] == 0){
      j = i;
      break;
    }
  }

  if(j == -1) {
    cout << "Non Zero Array";
  }
  
  for(int i = j+1; i<n; i++){
    if(arr[i] !=0 ){
      swap(arr[i], arr[j]);
      j++;
    }
  }

  //Result : 
  cout << "The Result : "<< endl;
  for(int j = 0; j < n; j++){
    cout<<arr[j]<<" ";
  }

  return 0;
}