//User Input/Output

//g++ -o <name you want to give><name of the file> (g++ -0 1 Lec_1.cpp )

#include <iostream> //file importing 
using namespace std;  //using namespace to reduce the ambiguity of standard names and identifires

int main(){ //main function
  int x,y; //int datatype 
  cin >> x >> y; //taking x and y value from input
  cout << "Value of x : " << x << "Value of y :"<< y << endl;  //Ouput of x and y
  return 0;
}

// You cane use <bits/stdc++.h> to import all the files and all the c++ libraries in a single go