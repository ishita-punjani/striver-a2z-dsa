#include<iostream>
using namespace std;
void Palindrome(int n) {
    int rev = 0;
    int num=n;
    while(n>0) {
        int rem=n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    if (rev == num) cout<<"Number is Palindrome";
    else cout<<"Number is NOT Palindrome";
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    Palindrome(num);
}