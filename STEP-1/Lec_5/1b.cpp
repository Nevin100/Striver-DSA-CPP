// Basic recusion problems : 

// Q1.) Print Name N times using Recusrion :

#include <iostream>
using namespace std;

int count = 0;
void recusrionFunction(string name,int n){
  if(count == n){
    return;
  }else{
    cout << "Your Name :" << name << endl;
    count++;
    recusrionFunction(name,n);
  }
}

int main(){
  int n;
  string name;

  cout << "Enter the N :" << endl;
  cin >> n;

  cout << "Enter the Name :" << endl;
  cin >> name;

  recusrionFunction(name,n);

  return 0;
}

// Q2.) Print N->1 Numbers using Recusion : 

#include <iostream>
using namespace std;

void recusrionReverse(int n){
  if(n == 0){
    return;
  }else{
    cout << n << endl;
    n--;
    recusrionReverse(n);
  }
}

int main(){
  int n;
  cout << "Enter the value of n :" << endl;
  cin >> n;
  recusrionReverse(n);
  return 0;
}
