#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1; 
}
void QuickSort(vector<int>& arr, int low, int high){
    if (low < high) {
            int pivotIndex = Partition(arr, low, high);
            QuickSort(arr, low, pivotIndex - 1);
            QuickSort(arr, pivotIndex + 1, high);
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
    QuickSort(arr,0, n-1);
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}