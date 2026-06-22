#include<bits/stdc++.h>
using namespace std;
void ReverseArray (int arr[], int n) {
    int i=0, j=n-1;
    while(i<j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main() {
    int num [7] = {0,1,2,3,4,5,6};
    ReverseArray(num, 7);
    for(int i=0; i<7; i++) {
        cout<<num[i]<<" ";
    }
    return 0;
}