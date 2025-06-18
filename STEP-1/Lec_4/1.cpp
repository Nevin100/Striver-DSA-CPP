//Basic Maths : 

// To extract the individual digits go for : %10 to get last and subsequently %10 and again %10 ---> will give second last and so on!!

// Complete Concept :
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the n : "<< endl;
  cin >> n;
  while( n > 0 ){
    int lastDigit = n % 10 ;
    n = n / 10;
    cout << "Last digit :" << lastDigit << endl;
  }
  cout << endl;
  return 0;
}

