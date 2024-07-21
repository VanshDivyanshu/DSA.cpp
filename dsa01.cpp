#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if (str=="Integer")
        {
            return sizeof(int);
        }
        else if (str =="Float")
        {
            return sizeof(float);
        }
        else if (str=="Character")
        {
            return sizeof(char);
        }
        else if (str=="Double")
        {
            return sizeof(double);
        }
        else if (str=="Long")
        {
            return sizeof(long);
        }
        else
        {
            return -1;
        }
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

