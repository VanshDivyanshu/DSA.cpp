#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n) {
    unordered_map <int, int> mpp;
    for (int i = 0; i< n; i++){
        mpp[arr[i]]++;
    }
    int maxFreq = 0, minFreq = n;   
    int maxElem = 0, minElem = 0;   

    for (auto it : mpp) {
        int count = it.second;
        int element = it.first;

        if(count > maxFreq){
            maxElem = element;
            maxFreq = count;
        }

        if(count < minFreq){
            minElem = element;
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxElem << endl;
    cout << "The lowest frequency element is: " << minElem << endl;

}

int main() {
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    freq(arr,n);
    return 0;
}