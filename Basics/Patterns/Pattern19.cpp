#include<iostream>
using namespace std;
void Pattern19 (int n) {
    int iniS=0;
    for(int i=0; i<n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        for (int k=0; k<iniS; k++) {
            cout<<" ";
        }
        for (int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        iniS +=2;
        cout<<"\n";
    }
    iniS =2*n-2;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        for (int k=0; k<iniS; k++) {
            cout<<" ";
        }
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        iniS -=2;
        cout<<"\n";
    }
}
int main() {
    Pattern19(5);
    return 0;
}