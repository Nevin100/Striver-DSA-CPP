//Patterns :
//4steps : 1.) Nested loops --> outer one for lines and inner ones for colunms 
        // 2.) Count rows and it is for outer loops and count columns for inner loops in a way that they get connected to number of rows.
        // 3.) Print the "*" or whatever in inner loop only
        // 4.) Observe the symmetry but optional and rest three steps are compulsory...  

//Question 1:
//* * * * 
//* * * *  
//* * * *
//* * * *

#include <iostream>
using namespace std;

int main(){
  int n = 4;
  for (int i = 0; i < n; i++){
    for(int j = 0; j< n; j++){
      cout << "*";
    }
  cout << endl;
  }
}