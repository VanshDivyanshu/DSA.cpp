/*

Largest Element in an Array

*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
      
      int largest  = arr[0] ;
      for(int i = 0; i<arr.size();i++){
          if(arr[i]>largest){
              largest = arr[i];
          }
      }
      return largest;
    }      
};

int main() {

    int t;
    cout<<"Enter : "<<endl;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
    }
    return 0;
}

