#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int mini = INT_MAX;
    int ctr = 0;
    int sum = 0;
    int flag = 0;
    char prev;
    if(s.length()<k) cout<<-1;
    else {
        prev = s[0];
        ctr = 1;
        sum+= prev - 96;
        for(int i=1;i<n;i++) {
            if(ctr==k) {
                flag = 1;
                break;
            }
            if(s[i]-prev>=2) {
                sum+= s[i] - 96;
                prev = s[i];
                ctr++;
            }
        }
        if(ctr==k) cout<<sum;
        else cout<<-1;
    }
}