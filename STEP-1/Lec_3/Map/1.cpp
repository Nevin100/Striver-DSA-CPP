#include <iostream>
#include <map>
using namespace std;

int main(){
  map<string,int>m;

  m["Television"] = 45000;
  m["Printer"] = 4500;
  m["Headphone"] = 450;
  m["Tablet"] = 4500;
  m["Phone"] = 78550;

  for(auto p : m){
    cout << p.first << " :  " <<p.second << endl;
  }

  return 0;
}