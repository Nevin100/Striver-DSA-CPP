#include <bits/stdc++.h> //include all the libraries
#include <vector>
using namespace std;


int main(){
  //STL -> Standarad Template Library:
  vector <int> vec;
  vec.push_back(1); //To push back the element 1 at the end
  vec.push_back(2); //To push back the element 2 at the end
  vec.push_back(3); //To push back the element 3 at the end

  cout << vec.size() <<  endl;
  cout << vec.capacity() <<  endl;
  return 0;
}


