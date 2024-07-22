/*
Your task is to complete the provided function and print the table in reverse order (with space between the values).
NOTE: As the code is checked against multiple test cases, the new line is necessary after every execution and the template code has taken care of that.

Example 1:-
Input:
1
Output:
10 9 8 7 6 5 4 3 2 1

Example 2:-
Input:
2
Output:
20 18 16 14 12 10 8 6 4 2
*/


#include <iostream>
using namespace std;

class Geeks {
public:
    static void printTable(int n) {
        int multiplier = 10;
        while (multiplier > 0) {
            // Your code here
            cout << multiplier * n << " ";
            multiplier--;
        }
        cout << endl;
    }
};

int main() {
    // taking input using cin
    int t;
    cin >> t;
    while (t-- > 0) {
        // taking n
        int n;
        cin >> n;

        // creating an object of class Geeks
        Geeks obj;

        // calling printTable() method
        // of class Geeks and passing
        // n as an argument
        obj.printTable(n);
    }
    return 0;
}

