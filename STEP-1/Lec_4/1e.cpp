// Program to check armstrong number : 

#include <iostream>
using namespace std;

int main(){
  int n, dup;
  int sum = 0;
  cout << "Enter the number : ";
  cin >> n;

  dup = n;
  while(n > 0){
    int lastDigit = n%10;
    sum += (lastDigit * lastDigit * lastDigit);
    n /= 10;
  }

  if(dup == sum){
    cout << "Armstrong number" << endl;
  } else {
    cout << "Not an Armstrong number" << endl;
  }
  return 0;
}