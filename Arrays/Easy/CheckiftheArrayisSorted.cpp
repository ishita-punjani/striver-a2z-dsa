#include<iostream>
using namespace std;
bool isSorted(int arr[], int n) {
    for (int i=1; i<=n; i++) {
        if (arr[i]<arr[i-1]) return false;
        else return true;
    }
    return true;
}
int main() {
    int arr[7]={-3, -2, -1, 0, 1, 2, 3};
    cout<<"Array: ";
    for(int i=0; i<7; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    printf("%s", isSorted(arr, 7) ? "True" : "False");
    return 0;
}