// Some functions : 

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
  vector <int> v = {1 ,2 ,3 ,4 ,5 ,6};

  v.erase(v.begin());
  v.erase(v.begin() + 1, v.begin() + 3 ); // erase the element from index 1 to 2
  for( int val : v){
    cout << val << " ";
  }
  cout << endl;
  return 0;
}