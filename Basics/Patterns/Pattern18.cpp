#include<iostream>
using namespace std;
void Pattern (int n) {
    for (int i=0; i<n; i++) {
        char ch=('A'+n-1)-i;
        for (char c=ch; c<='A'+n-1; c++) {
            cout<<c<<" ";
        }
        cout<<"\n";
    }
}
int main() {
    Pattern(5);
}