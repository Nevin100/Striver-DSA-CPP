//Question 5:

//* * * * *
//* * * *
//* * *
//* * 
//*

#include <iostream>
using namespace std;

int main(){
  int n = 5;
  for (int i = 1; i <= n; i++ ){
    for( int j = 0; j < (n-i) +1; j++ ){
      cout << "* ";
    }
    cout <<endl;
  }  
}