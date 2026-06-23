#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int q;
    cout<<"Enter number of queries: ";
    cin>>q;
    int hash[256]={0};
    for (int i=0; i<str.size(); i++) {
        hash[str[i]]++;
    }
    while (q--) {
        char ch;
        cout<<"Enter character: ";
        cin>>ch;
        cout<<hash[ch]<<"\n";
    }
    return 0;
}
