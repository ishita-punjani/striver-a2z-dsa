#include<iostream>
using namespace std;
int main() {
    int arr[7]={9, 12, 3, 2, 10, 12, 9};
    int max=arr[0];
    cout<<"Array: ";
    for (int i=0; i<7; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for (int i=0; i<7; i++) {
        if (arr[i]>= max) {
            max=arr[i];
        }
    }
    cout<<"Largest element: "<<max;
    return 0;
}