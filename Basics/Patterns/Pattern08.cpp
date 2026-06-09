#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=n; i>=1; i--) {
        for (int j=0; j<n-i+1; j++) {
            cout<<" ";
        }
        for (int k=0; k<2*i-1; k++) {
            cout<<"*";
        }
        for (int j=0; j<n-i+1; j++) {
            cout<<" ";
        }
        cout<<"\n";
    }
}