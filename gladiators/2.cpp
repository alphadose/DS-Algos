#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);

	int t;
	cin>>t;

	while(t > 0) {
        int n;
		cin>>n;

        ll ans = 0;
		ll self[n];
		ll opp[n];

		for(int i=0;i<n;i++) cin>>self[i];
		for(int i=0;i<n;i++) cin>>opp[i];
        sort(opp, opp+n);
        sort(self, self+n);

		int iter1=0, iter2=0;
		while(iter1 < n && iter2 < n) {
			if(self[iter1] > opp[iter2]) {
				ans++;
				iter2++;
                iter1++;
			} else {
                iter1++;
            }
		}
		cout<<ans<<endl;
        t--;
	}
}
