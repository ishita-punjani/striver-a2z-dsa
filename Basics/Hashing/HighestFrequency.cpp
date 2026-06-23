#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    unordered_map<int, int> map;
    for(int i=0; i<n; i++) {
        map[arr[i]]++;
    }
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    for (auto it : map) {
        int element = it.first;
        int count = it.second;
        if (count > maxFreq) {
            maxFreq = count;
            maxEle = element;
        }
        if (count < minFreq) {
            minFreq = count;
            minEle = element;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}