#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)
        if(a[i]>a[i-1] && a[i]<=(a[i-1]+k)) {
            int k = a[i-1];
            int j = i-1;
            while(a[j]==k) {
                a[j--] = -1;
            }
        }
    int res = 0;
    for(int i=0;i<n;i++)
        if(a[i]!=-1)
            res++;
    cout<<res;
}