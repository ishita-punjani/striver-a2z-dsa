#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int arr[n];
    map<int, int>mpp;
    for(int i=0; i<n; i++) {
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
        
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter number of queries: ";
    cin>>q;
    while(q--) {
        int number;
        cout<<"Enter number: ";
        cin>>number;
        cout<<mpp[number]<<endl;
    }
}