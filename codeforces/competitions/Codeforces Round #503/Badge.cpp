#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    
    int count[n];
    int temp;
    for(int i=0;i<n;i++) {
        memset(count, 0, sizeof(count));
        temp = i;
        while(true) {
            if(count[temp]==2) {
                cout<<temp+1<<" ";
                break;
            }
            count[temp]++;
            temp = p[temp]-1;
        }
    }
}