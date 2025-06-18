// Print all the divisors of N: 

#include <iostream>
using namespace std;

void printDivisors(int n){
  for(int i = 1; i <= n ; i++ ){
    if(n%i == 0){
      cout << i << " ";
    }
  }
}

int main(){
  int N;
  cout << "Enter the number : ";
  cin >> N;
  printDivisors(N); 
  return 0;
}
