#include<bits/stdc++.h>
using namespace std;
void SelectionSort( vector<int>& arr, int n) {
    for (int i=0; i<n; i++) {
        int min=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
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
    SelectionSort(arr, n);
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}