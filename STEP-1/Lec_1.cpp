//User Input/Output

//g++ -o <name you want to give><name of the file> (g++ -o 1 Lec_1.cpp )

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

//3.)Condition if-else

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

//4.) Switch Statement

#include <iostream>
using namespace std;

int main(){
  int day;
  cin >> day;
  switch(day){
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
    default:
      cout << "Invalid switch";
  }
  return 0;
}