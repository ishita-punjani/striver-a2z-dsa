#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int>& arr, int n) {
    if (n == 1) return;
    int didSwap = 0;
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
    }
    if (didSwap == 0) return;
    BubbleSort(arr, n-1);
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
    BubbleSort(arr, n);
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}