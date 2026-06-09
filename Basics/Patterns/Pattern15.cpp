#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i=n-1; i>=0; i--) {
        for (char ch='A'; ch<='A'+i; ch++) {
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}