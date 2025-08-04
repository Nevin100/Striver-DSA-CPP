//Q.) Second Largest element in the array :

// Approach --> Brute : first sort and then the second largest element must not be same as largest, so you check the index before it and keep till you get second largest 
          //--> Better : let largest to be first one and after first pass, get the largest and now again with second_largest, do another pass by comparing it to be smaller than the largest but bigger than rest 
          //--> Optimal :let the largest and second_largest be first and -1 respectively and for each iteration update the value of largest and consequently check for the second largest in a logical sense. 

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

  int largest = arr[0];
  int second_largest = -1;
  for(int i = 1; i <= n-1; i++){
    if(arr[i] > largest){
      second_largest = largest;
      largest = arr[i];
    }

    else if(arr[i] < largest && arr[i] > second_largest){
      second_largest = arr[i];
    }
  }

  cout << "The Largest Element of the array : " << largest <<endl;
  cout << "The Second Largest Element of the array : " << second_largest << endl;

  return 0;
}