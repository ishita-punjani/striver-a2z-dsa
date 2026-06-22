#include<bits/stdc++.h>
using namespace std;
void PrintName(string name, int count, int n) {
    if (count==n) {
        return;
    }
    cout<<name<<"\n";
    PrintName(name, count+1, n);
}
int main() {
    PrintName("Ishita", 0, 5);
    return 0;
}