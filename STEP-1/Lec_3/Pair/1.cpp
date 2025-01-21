#include <iostream>
using namespace std;

int main()
{
  // pair <int,int> l = {1,3};

  // cout << l.first << endl;
  // cout << l.second << endl;

  pair < int , pair <int,int>> p = {1,{2,3}};
  cout << p.first << endl;
  cout << p.second.first << endl;
  return 0;

}