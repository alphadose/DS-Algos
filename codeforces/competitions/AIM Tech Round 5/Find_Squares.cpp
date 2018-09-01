#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    char store[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>store[i][j];
    int x1,y1,x2,y2;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(store[i][j]=='B') {
                x1 = i+1;
                y1 = j+1;
            }

    for(int i=n-1;i>=0;i--)
        for(int j=m-1;j>=0;j--)
            if(store[i][j]=='B') {
                x2 = i+1;
                y2 = j+1;
            }
    
    cout<<(x1+x2)/2<<" "<<(y1+y2)/2;
}