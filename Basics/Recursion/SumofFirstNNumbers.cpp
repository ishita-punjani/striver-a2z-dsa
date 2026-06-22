#include<bits/stdc++.h>
using namespace std;
int SumofNnumbers (int n) {
    if(n==1) return 1;
    int sum=n+SumofNnumbers(n-1);
    return sum;
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result=SumofNnumbers(num);
    cout<<"Sum of the first "<<num<<" natural numbers = "<<result;
    return 0;
}