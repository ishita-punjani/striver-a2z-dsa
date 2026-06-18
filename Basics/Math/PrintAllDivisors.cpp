#include<bits/stdc++.h>
using namespace std;
/*Brute Force
    void Divisors(int n) {
    for (int i=n; i>=1; i--) {
        if(n%i==0) cout<<i<<" ";
    }
}
*/
vector<int> Divisors(int n) {
    vector<int> divisors;
    for (int i=1; i<=sqrt(n); i++) {
        if(n%i==0){
            divisors.push_back(i);
        }
        if (i != n / i) {
            divisors.push_back(n / i);
        }
    }
    return divisors;
}
int main() {
    int N = 36;
    vector<int> result = Divisors(N);
    cout << "Divisors of " << N << ": ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}