// Hashing of Alphabets : This program counts the frequency of characters in a string

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter the String: ";
  cin >> s;

  // Frequency count for all ASCII characters
  int hash[256] = {0};

  // Fill frequency table
  for (int i = 0; i < s.size(); i++) {
    hash[s[i]]++;  // Use ASCII directly
  }

  int q;
  cout << "Enter number of queries: ";
  cin >> q;

  // Query loop
  while (q--) {
    char c;
    cout << "Enter the character: ";
    cin >> c;
    cout << hash[c] << endl;  // Direct lookup using ASCII
  }

  return 0;
}
