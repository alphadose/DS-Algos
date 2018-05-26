#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin>>n>>t;
    int a[n], flag=0;
    for(int i=1;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;) {
        if(i+a[i]>t)
            break;
        if(i+a[i]==t) {
            flag=1;
            break;
        }
        i+=a[i];
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
}