// Recusrion : when a function is called itself until a specified condition is met

#include <iostream>
using namespace std;
int count = 0;

void recusrionFunction(){
  if(count == 3) // Base Condition
  { 
    return;
  }
  else{
    cout << "The Count :" << count << endl;
    count++;
    recusrionFunction(); // Calling Itself untill count == 3
  }
}

int main()
{
  cout<<"Recusrion :"<<"\n";
  recusrionFunction();
  return 0;
}