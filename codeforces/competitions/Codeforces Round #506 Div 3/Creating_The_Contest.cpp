#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxi = 1;
    int count = 1;
    for(int i=1;i<n;i++) {
        if(a[i]>2*a[i-1]) {
            count = 1;
            continue;
        }
        count++;
        maxi = max(maxi,count); 
    }
    cout<<maxi;
}