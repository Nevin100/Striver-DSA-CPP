#include <iostream>
using namespace std;

// 1. Void function (non-parameterized, non-returning)
void printName() {
    cout << "Hey Nevin" << endl;
}

// 2. Parameterized function (non-returning)
void printName1(string name) {
    cout << "Hey " << name << endl;
}

// 3. Non-parameterized, returning function
string printName2() {
    string name = "Nevin";
    return name;
}

// 4. Parameterized, returning function
int printValue(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    int num1 = 5, num2 = 10;
    string name = "Nevin";

    // Calling functions
    cout << "Function printName: ";
    printName(); 

    cout << "Function printName1: ";
    printName1(name);

    string name1 = printName2(); // 
    cout << "Function printName2: " << name1 << endl;

    int result = printValue(num1, num2); // 
    cout << "Function printValue: " << result << endl;

    return 0;
}
