#include<iostream>
using namespace std;
/*Brute force
    int GCD(int a, int b) {
        int gcd=1;
        int k=min(a,b);
        for(int i=1;i<=k; i++) {
            if(a%i==0 && b%i==0) gcd=i;
        }
        return gcd;
    }
*/
/*Better
    int GCD(int a, int b){
        for(int i=min(a,b); i>=1; i--) {
            if(a%i==0 && b%i==0)  return i;
        }
        return 1;
    }
*/
int GCD(int a , int b) {
    while(a>0 && b>0) {
        if(a>b) {
            a=a%b;
        } else {
            b=b%a;
        }
    }
    if(a==0) {
         return b;
    }
    return a;
}
int main() {
    int n1, n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    int res = GCD(n1,n2);
    cout<<"GCD of "<<n1<<" and "<<n2<<"="<<res;
}