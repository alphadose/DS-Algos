#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int k = n-1;
    if((k-1)%3==0)
        cout<<1<<" "<<2<<" "<<k-2;
    else
        cout<<1<<" "<<1<<" "<<k-1;
}

