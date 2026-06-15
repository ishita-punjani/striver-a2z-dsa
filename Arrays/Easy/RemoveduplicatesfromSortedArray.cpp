#include<iostream>
using namespace std;
int removeDuplicate (int arr[], int n) {
    int i=0;
    for (int j=1; j<n; j++) {
        if (arr[i]!=arr[j]) {
            arr[i]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main() {
    int a[10] = {-1, -1, 0, 1, 2, 2, 2, 3, 4, 5};
    cout<<"Size of array without duplicates: "<<removeDuplicate(a, 10);
}