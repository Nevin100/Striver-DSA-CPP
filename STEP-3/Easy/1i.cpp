// Q.) Union of two sorted arrays :

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n1;
  cout << "Enter the size of array 1 :";
  cin >> n1;

  int n2;
  cout << "Enter the size of array 2 :";
  cin >> n2;

  vector<int> arr1(n1);
  for (int i = 0; i < n1; i++){
    cout << "Enter the elements (in sorted manner) at the index " << i << "of the array 1: ";
    cin >> arr1[i];
  }

  vector<int> arr2(n2);
  for (int i = 0; i < n2; i++){
    cout << "Enter the elements (in sorted manner) at the index " << i << "of the array 2: ";
    cin >> arr2[i];
  }

  //Two pointer approach :
  vector<int> union;
  for(int i = 0; i < n1; i++ ){
    for(int j = 0; j < n2; j++){
      if(arr1[i] < arr2[j]){
        if(union.back() != a[i])
      }
    }
  }
  
  return 0;
}