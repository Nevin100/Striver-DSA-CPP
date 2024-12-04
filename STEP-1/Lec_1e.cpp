#include <iostream>
using namespace std;

// Pass by value :  where a copy of argument is passed into the function and doest let the user to alter the original value
void addfive(int x){
  x = x + 5;
  cout << "Inside function: " << x << endl;
}

// Pass by reference : where a copy of the argument is not passed into the function but the original value is passed.
void addFive1(int &x){
  x = x + 5;
  cout << "Inside function: " << x << endl;
}

int main(){
  int x = 10;
  cout << "Before function:(Pass by Value) " << x << endl;
  addfive(x);
  cout << "After function:(Pass by Value) " << x << endl;
  cout<<"\n";
  cout << "Before function:(Pass by Reference) " << x << endl;
  addFive1(x);
  cout << "After function:(Pass by Reference) " << x << endl;
  return 0;
}
