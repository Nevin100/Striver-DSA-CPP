//User Input/Output

//g++ -o <name you want to give><name of the file> (g++ -0 1 Lec_1.cpp )

//1.) Skelton of C++:

#include <iostream> //file importing 
using namespace std;  //using namespace to reduce the ambiguity of standard names and identifires

int main(){ //main function
  int x,y; //int datatype 
  cin >> x >> y; //taking x and y value from input
  cout << "Value of x : " << x << "Value of y :"<< y << endl;  //Ouput of x and y
  return 0;
}

// You cane use <bits/stdc++.h> to import all the files and all the c++ libraries in a single go

//2.) Data Type :Type of data being used in the program.

// C.)Condition
//3.) Write a program that takes an input of age and check whteher you are an adult or not?

#include <iostream>
using namespace std;

int main(){
  int age;
  if (age >= 18){ //if condition
    cout<<"You are an adult"<<endl;
  }else{
    cout<<"You are not adult"<<endl;
  }
  return 0;
}