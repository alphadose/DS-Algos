#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n;
	cin>>n;

	ll requests[n];
	ll availability[n];

	for(int i = 0; i<n; i++) cin>>requests[i];
	for(int i = 0; i<n; i++) cin>>availability[i];

	ll ans = INT_MAX;

	for(int i=0;i<n;i++) {
	    ll frac = availability[i]/requests[i];
        ans = min(ans, frac);
	}

	cout<<ans<<endl;
}
