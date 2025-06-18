//Program to reverse a number :

#include <iostream>
using namespace std;

int main(){
  int n;
  cout << " Enter the number n to be reversed : ";
  cin >> n;
  int revNumber = 0;
  while(n>0){
    int lastDigit = n % 10;
    n = n / 10;
    revNumber = revNumber * 10 + lastDigit;
  }

  cout << " The reversed number is : " << revNumber << endl;
  return 0;
}