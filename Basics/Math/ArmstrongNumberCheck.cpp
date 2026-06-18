#include<iostream>
#include<math.h>
using namespace std;
bool ArmstrongNumber(int n) {
    int num=n, sum=0;
    int k = (int)(log10(n)+1);
    while (n>0) {
        int rem=n%10;
        sum+=pow(rem,k);
        n/=10;
    }
    if (sum==num) return true;
    else return false;
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (ArmstrongNumber(n)) {
        cout << n << " is an Armstrong number";
    }
    else {
        cout << n << " is not an Armstrong number";
    }
    return 0;
}