// Q.) Largest element in the array : 
// Approach : Brute force --> Sort and last index element will be the largest element
//            Optimal Solution --> put fist index will be largest and compare it to over a single iteration and return largest 

// Brute Force : 
#include <iostream>
#include <vector>
using namespace std;

int main(){
  
  //Optimal Solution : 
  
  int n;
  cout<<"Enter the number of elements : ";
  cin >> n;

  vector<int> arr(n);
  for(int i = 0;i <= n-1; i++){
    cout<<"Enter the value at index " << i << ": " ;
    cin >> arr[i];
  }

  int largest = arr[0];
  for (int j = 1; j <= n-1; j++){
    if(largest < arr[j]){
      largest = arr[j];
    }
  }
  cout << "The Largest Element :"<< largest;
  return 0;
}

