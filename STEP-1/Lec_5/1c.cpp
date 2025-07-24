//Parametrised and Functional Recusrion : 

// Q.1) Sum of nummbers from 1 to n using Functional Recursion : 
#include <iostream>
using namespace std;

int functional_Sum_Recursion(int n){
  if(n==0){
    return 0;
  }else{
    return n + functional_Sum_Recursion(n-1);
  }
}

int main(){
  int n;
  cout << "Enter the value of n :";
  cin >> n;
  
  cout << "The Result :" << functional_Sum_Recursion(n);
  return 0;
}


// Q.2) Sum of nummbers from 1 to n using Paremetrised Recursion :
#include <iostream>
using namespace std;

int Parametrised_Sum_Recursion(int n,int sum){
  if(n == 0){
    return sum;
  }else{
    return Parametrised_Sum_Recursion(n-1,sum + n);
  }
}

int main(){
  int sum = 0;
  int n;
  
  cout << "Enter the Value of n :";
  cin >> n;
  
  cout << "The Result :" << Parametrised_Sum_Recursion(n,sum);
  return 0;
}

// Q3.) factorial of a number N using recursion : --> NxN-1...x4x3x2x1
  #include <iostream>
  using namespace std;

  int factorial_Recursion(int n){
    if(n == 1 || n == 0){
      return 1;
    }else{
      return n * factorial_Recursion(n-1);
    }

  }

  int main(){
    int n;

    cout << "Enter the Value of n :" << endl;
    cin >> n;

    cout << "The Factroial :" << factorial_Recursion(n); 
    return 0;
  }

