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
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }
    for (auto x : mpp) {
        cout << x.first << ": " << x.second << endl;
    }

}