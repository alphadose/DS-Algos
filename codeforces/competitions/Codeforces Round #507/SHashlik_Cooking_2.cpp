#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    if(k>=n/2+1) {
        cout<<1<<endl;
        cout<<n/2;
        return 0;
    }
    int t = n/(2*k+1);
    int left = max(n - t*(2*k+1) - k, 1);
    cout<<t+1<<endl;
    while(left<=n) {
        cout<<left<<" ";
        left = left + 2*k+1;
    }
}