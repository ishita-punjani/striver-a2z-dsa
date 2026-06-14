#include<iostream>
using namespace std;
int main() {
    int arr[7]={78, 13, 58, 100, 96, 11, -3};
    int max=INT_MIN, sec_max=INT_MAX, min=INT_MAX, sec_min=INT_MAX;
    for (int i=0; i<7; i++) {
        if (arr[i]<=min){
            sec_min=min;
            min=arr[i];
        } else if (arr[i]<sec_min) {
            sec_min=arr[i];
        }

        if (arr[i]>max) {
            sec_max=max;
            max=arr[i];
        } else if (arr[i]>sec_max) {
            sec_max=arr[i];
        }
    }

    cout<<"Array: ";
    for (int i=0; i<7; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\nLargest Element: "<<max;
    cout<<"\nSecond Largest Element: "<<sec_max;
    cout<<"\nSmallest Element: "<<min;
    cout<<"\nSecond Smallest Element: "<<sec_min;
    return 0;
}