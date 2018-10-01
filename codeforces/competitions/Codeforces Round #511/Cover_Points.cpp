#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];
    
    int side = 1;
    for(int i=0;i<n;i++) {
        side = max(side,a[i][0]+a[i][1]);
    }
    cout<<side;
}