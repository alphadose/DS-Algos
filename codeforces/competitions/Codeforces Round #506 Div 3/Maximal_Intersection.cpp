#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];
    int flag = 0;
    int maxi = 0;
    int sum = 0;
    int inix, iniy;
    while(flag<n) {
        sum = 0;
        if(flag!=0) {
            inix = a[0][0];
            iniy = a[0][1];
        }
        else {
            inix = a[1][0];
            iniy = a[1][1];
        }
        for(int i=0;i<n;i++) {
            if(i==flag) continue;
            if(a[i][0]==a[i][1]) {
                inix = a[i][0];
                iniy = a[i][1];
            }
            else if(inix<a[i][0] && iniy>a[i][1]) {
                inix = a[i][0];
                iniy = a[i][1];
            }
            else if(inix<a[i][0] && iniy<a[i][1]) {
                inix = a[i][0];
            }
            else if(inix>a[i][0] && iniy>a[i][1]) {
                iniy = a[i][1];
            }
        }
        maxi = max(maxi,iniy-inix);
        flag++;
    }
    cout<<maxi;
}