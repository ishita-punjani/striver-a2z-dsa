#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }

    int hash[13]={0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"Enter number of queries: ";
    cin >> q;
    while (q--) {
        int number;
        cout<<"Enter number: ";
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}