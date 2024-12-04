//Loops : for iteration and nuber of steps , one needs to perform  number of iterations 

//1.) for loop
#include <iostream>
using namespace std;

int main(){
  for(int i = 1; i<=10; i++){
    cout<<"Nevin Bali"<<endl;
  }
  return 0;
}

//2.) While loop
#include <iostream>
using namespace std;

int main(){
  int i = 0;
  while ( i <= 5){
    cout << "Nevin" << endl;
    i+=1; 
  }
  return 0;
}

//3.) Do while loop
#include <iostream>
using namespace std;

int main(){
  int i = 0;
  do{
    cout << "Nevin" << endl;
    i+=1;
    }while (i <= 5);
    return 0;
}