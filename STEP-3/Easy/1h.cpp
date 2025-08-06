// Linear Search : 

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

  int result = -1;
  int num;
  cout << "Enter the Number you want to look for ?? :";
  cin >> num;

  for (int i = 0; i < n; i++){
    if(arr[i] == num){
      result = i;
      cout << "The element is at index : "<< result << endl;
      break;
    }
  }

  if(result == -1){
    cout << "The number is not in array" << endl;
  }

  return 0;
}