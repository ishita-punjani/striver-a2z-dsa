#include<iostream>
using namespace std;
void Pattern22 (int n) {
    for (int i=0; i<=2*n-2; i++) {
        for (int j=0; j<=2*n-2; j++) {
            int top = i, left = (2*n - 2) - i, bottom = j, right = (2*n - 2) - j;
            int minDistance = min(min(top, left), min(bottom, right));
            cout << (n - minDistance) << " ";
        }
        cout<<"\n";
    }
}
int main() {
    Pattern22(4);
    return 0;
}