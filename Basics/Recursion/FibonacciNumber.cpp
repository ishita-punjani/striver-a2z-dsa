#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int last = fibonacci(n - 1);
    int slast = fibonacci(n - 2);
    return last + slast;
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result = fibonacci(num);
    cout<<"Fibonacci number of "<<num<<" = "<<result;
    return 0;
}