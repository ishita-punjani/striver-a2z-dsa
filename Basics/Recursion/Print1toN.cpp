#include<bits/stdc++.h>
using namespace std;
void PrintNum (int count, int n) {
    if(count>n) return ;
    cout<<count<<" ";
    PrintNum(count+1, n);
}
int main() {
    int num=15;
    PrintNum(1,num);
    return 0;
}