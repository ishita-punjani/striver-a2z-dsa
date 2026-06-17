#include<iostream>
#include<math.h>
using namespace std;
/* --- Brute Force ---
   int CountDigits(int n) {
    int count=0;
    while (n>0) {
        count++;
        n=n/10;
    }
    return count;
}
*/
//Optimal Approach
int CountDigits(int n) {
    int count = (int)(log10(n)+1);
    return count;
}
int main() {
    int res = CountDigits(789103);
    cout<<"Number of digits in '789103': "<<res;
}