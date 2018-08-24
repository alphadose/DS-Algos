#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int n, h, a, b, k, ta, fa, tb, fb;
    cin>>n>>h>>a>>b>>k;
    int floor;
    while(k--) {
        cin>>ta>>fa>>tb>>fb;
        if(fa>b || fa<a) {
            if(abs(fa-a)>abs(fa-b))
                floor = b;
            else
                floor = a;
            int temp = min(abs(fa-a),abs(fa-b));
            if(ta==tb) cout<<abs(fa-fb)<<endl;
            else
            cout<<temp + abs(ta-tb) + abs(fb-floor)<<endl;
        }
        else {
            cout<<abs(ta-tb)+abs(fb-fa)<<endl;
        }
    }
}