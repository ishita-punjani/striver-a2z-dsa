#include<bits/stdc++.h>
using namespace std;
void PrintNum (int n) {
    if (n<1) return;
    cout<<n<<" ";
    PrintNum(n-1);
}
int main() {
    PrintNum(17);
    return 0;
}