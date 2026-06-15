#include<iostream>
using namespace std;
void Pattern20 (int n) {
    int spaces=2*n-2, stars=0;
    for (int i=1; i<=2*n-1; i++) {
        if (i<=n){
            stars=i;
        }
        else {
            stars =2*n-i;
        }
        for (int j=1; j<=stars; j++) {
            cout<<"*";
        }
        for (int k=1; k<=spaces; k++) {
            cout<<" ";
        }
        for (int j=1; j<=stars; j++) {
            cout<<"*";
        }
        if (i<n) spaces-=2;
        else spaces+=2;
        cout<<"\n";
    }
}
int main() {
    Pattern20(5);
    return 0;
}