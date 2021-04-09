#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    ll t;
    cin>>t;
    while(t--) {
        ll x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;
        ll cost = 0;
        if((x>0 && y>0) || (x<0 && y<0)) {
            if(b > 2*a) cost += abs(x)*a + abs(y)*a;
            else {
                x = abs(x);
                y = abs(y);
                ll kek = min(x,y);
                cost += b*kek;
                x -= kek;
                y -= kek;
                cost += a*x + y*a;
            }
        } else {
            ll state1 = abs(x)*a + abs(y)*a;
            ll state2 = min(abs(y),abs(x))*b + abs(x-y) *a;
            cost = min(state1, state2);
        }
        cout<<cost<<endl;
    }
}
