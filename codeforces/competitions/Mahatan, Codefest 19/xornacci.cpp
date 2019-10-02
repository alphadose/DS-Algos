#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    int a,b,n,prev;
    while(t--) {
        cin>>a>>b>>n;
        if(n<2) {
            cout<<(n==0)?a:b<<endl;
        } else {
            for(int i=2;i<=n;i++) {
                prev = a ^ b;
            }
            cout<<store[n]<<endl;
        }
    }
    return 0;
}