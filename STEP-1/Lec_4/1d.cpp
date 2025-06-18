// Program to check whether the number is palindrome or not

#include <iostream>
using namespace std;

int main(){
  int dup, n;
  cout << "Enter the number :";
  cin >> n;

  dup = n;
  int revNumber = 0;

  while ( n>0 ){
    int lastDigit = n%10;
    revNumber = (revNumber * 10) + lastDigit;
    n = n/10;
  }

  if(revNumber == dup){
    cout << "The number is palindrome" << endl;
  }else{
    cout << "The number is not pallindrome" << endl;
  }
  return 0;
}