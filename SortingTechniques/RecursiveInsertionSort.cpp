#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int>& arr, int i, int n) {
    if (i == n) return;
    int j = i;

    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
    InsertionSort(arr, i + 1, n);
}
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter Elements of array (space-separated) :";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    InsertionSort(arr, 0,  n);
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}