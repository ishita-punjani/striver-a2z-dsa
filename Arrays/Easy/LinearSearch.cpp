#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int num) {
    for (int i=0; i<n; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return -1;
}
int main() {
    int a[5]= {13, 7, 8, 3, 12};
    cout<<"Array: ";
    for (int i=0; i<5; i++) {
        cout<<a[i]<<" ";
    }
    int num;
    cout<<"\nElement whose index is to be found: ";
    cin>>num;
    cout<<num<<" is at "<<linearSearch(a, 5, num);
    return 0;
}
