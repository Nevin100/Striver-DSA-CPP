// Q.) Left Rotate the element by one place

// Left Rotation  means : if arr [] = [1,2,3,4,5] and if I want to rotate the element by one place --> arr[] = [2,3,4,5,1]

//Approach --> Optimal : just store the first element in temp variable and the rest to be moved one position before and place the temp variable value at last.

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

  //Left Rotation by one element :
  int temp = arr[0];
  for (int i = 1;i < n; i++){
    arr[i-1] = arr[i];
  }
  arr[n-1] = temp;

  //Result : 
  cout << "The Result : "<< endl;
  for(int j = 0; j < n; j++){
    cout<<arr[j]<<" ";
  }
  return 0;
}