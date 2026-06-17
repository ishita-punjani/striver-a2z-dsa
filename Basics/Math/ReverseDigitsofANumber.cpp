#include<iostream>
using namespace std;
int ReverseDigits(int n) {
    int rev = 0;
    while(n>0) {
        int rem=n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int res = ReverseDigits(num);
    cout<<"Reverse of "<<num<<" is "<<res;
}