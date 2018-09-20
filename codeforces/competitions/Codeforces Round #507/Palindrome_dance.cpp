#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin>>n>>a>>b;
    int c[n];
    for(int i=0;i<n;i++)
        cin>>c[i];
    int sum = 0;
    for(int i=0;i<=n/2;i++) {
        if(i>n-i-1) break;
        if(c[i]!=2 && c[n-i-1]!=2) {
            if(c[i]!=c[n-i-1]) {
                cout<<-1;
                return 0;
            }
        }
        if(c[i]==2 && c[n-i-1]==2) {
            if(i==n-i-1)
            sum+=min(a,b);
            else
            sum+=2*min(a,b);
            continue;
        }
        if(c[i]==2) {
            if(c[n-i-1]==0)
                sum+=a;
            else
                sum+=b;
        }
        else if (c[n-i-1]==2){
            if(c[i]==0)
                sum+=a;
            else
                sum+=b;
        }
    }
    cout<<sum;
}