#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h,s=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        s+= (a[i]>h?2:1);
    }
    cout<<s;
}