// Q.) Left rotate the array by d places : 
#include <iostream>
#include <vector>
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

  int d;
  cout << "Enter the spaces for which the array is going to be rotated :";
  cin >> d;
  
  // Left rotate by d spaces : 
  
  //Put the elements upto the value of d in temp[]
  vector<int> temp(d);
  for(int i = 0; i < d; i++){
    temp[i] = arr[i];
  }

  //Shifting the element by n-d spaces
  for(int i = d; i < n; i++){
    arr[i-d] = arr[i];
  }
  
  //Placing the element in the position after roattion from temp to original array arr[] 
  for(int i = n-d; i<n; i++){
    arr[i] = temp[i - (n-d)];
  }

  //Result : 
  cout << "The Result : "<< endl;
  for(int j = 0; j < n; j++){
    cout<<arr[j]<<" ";
  }
  return 0;
}