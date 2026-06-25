#include<bits/stdc++.h>
using namespace std;
/*Brute Force
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        for (int i = 1; i <= n; i++) {
            bool found = false;
            for (int j = 0; j < n - 1; j++) {
                if (arr[j] == i) {
                    found = true;
                    break;
                }
            }
            if (!found)
                return i;
        }
        return -1;
    }    
*/
int missingNum(vector<int> &arr) {
    int n = arr.size() + 1;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    long long expSum = (n *1LL* (n + 1)) / 2;
    return expSum - sum;
}
int main() {
    int n;
    cout << "Enter N (numbers from 1 to N): ";
    cin >> n;
    vector<int> arr(n - 1);
    cout << "Enter " << n - 1 << " numbers: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    cout << "Missing number: " << missingNum(arr) << endl;
    return 0;
    return 0;
}