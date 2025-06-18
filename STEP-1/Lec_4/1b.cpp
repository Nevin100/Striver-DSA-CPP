// Program to count digits : 

#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter your number : " << endl;
  cin >> n;
  int count = 0;
  while( n>0 ){
    n = n/10;
    count++;
  }

  cout << "The coiount of digit : " << count << endl;
  return 0;
}
 

// Shortcut or (implementation of Logarithmic code) :
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout << "Enter the number n :" << endl;
  cin >> n;
  int count = 0;
  count = (int)(log10(n) + 1); // log(n) gives the number of digits in n
  cout << "The count of digits in n : " << count << endl;
  return 0;
}