#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout<<" ";
        }
        char ch='A';
        int mid=(2*i+1)/2;
        for (int k=1; k<=2*i+1; k++) {
            cout<<ch;
            if(k<=mid) ch++;
            else ch--;
        }
        for (int j=0; j<n-i-1; j++) {
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}