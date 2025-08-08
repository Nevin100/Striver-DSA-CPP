// Q.) Find missing numbers :

// Approach --> Brute :  Just do simple linear search and use a flag to check whether the number is present or not... if the number is present then increment the flag by 1 else return -1
        //---> ~Better : You can use hashing and mark the element present as 1 and rest 0.. the one which is not prsent will be 0 dusring the iteration;
        //---> Optimal : You can use the sum method , just calculatye the sum of n numbers and the array sum, if difference 0 then no missing number, else the return sum - sum.
        

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    int N;
    cout << "Missing numbers upto N; Enter N: ";
    cin >> N;

    bool allPresent = true;

    for (int num = 1; num <= N; num++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Missing Number: " << num << endl;
            allPresent = false;
        }
    }

    if (allPresent) {
        cout << "All the numbers are present" << endl;
    }

    return 0;
}
