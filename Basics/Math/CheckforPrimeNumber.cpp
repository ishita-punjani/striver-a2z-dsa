#include<bits/stdc++.h>
using namespace std;
/*Brute Force
    bool isPrime(int n) {
    for(int i=2; i<n; i++) {
        if(n%i==0) return false;
    }
    return true;
}
*/
bool isPrime(int n) {
    int cnt=0;
    for(int i=1; i<=sqrt(n); i++) {
        if(n%1==0) {
            cnt++;
        }
        if(n/i!=i) {
            cnt++;
        }
    }
    if(cnt==2) return true;
    else return false;
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPrime(n)) cout<<n<<" is a Prime number.";
    else cout<<n<<" is NOT a Prime number.";
    return 0;
}