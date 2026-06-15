#include<iostream>
using namespace std;
void unionSortedArrays(int arr1[], int arr2[], int m, int n, int res[]) {
    int i=0, j=0, k=0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            res[k] = arr1[i];
            i++;
            k++;
        }
        else if (arr2[j] < arr1[i]) {
            res[k] = arr2[j];
            j++;
            k++;
        }
        else {
            res[k] = arr1[i];
            i++;
            j++;
            k++;
        }
    }
    while (i < m) {
        res[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n) {
        res[k] = arr2[j];
        j++;
        k++;
    }
}
void display(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int a1[5]={1, 3, 5 , 7, 9};
    int a2[6]={0, 2, 4, 6, 8, 10};
    int result[11];
    unionSortedArrays(a1, a2, 5, 6, result);
    cout << "Union of Sorted Arrays: ";
    display(result, 11);
    return 0;
}