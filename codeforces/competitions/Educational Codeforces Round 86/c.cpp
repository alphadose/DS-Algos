#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long int

// const ll TIME = chrono::high_resolution_clock::now().time_since_epoch().count();
// const ll SEED = (ll)(new ll);
// const ll RANDOM = TIME ^ SEED;
// const ll MOD = (int)1e9+7;
// const ll MUL = (int)1e6+3;

// struct chash {
//     const int RANDOM = (long long)(make_unique<char>().get()) ^ chrono::high_resolution_clock::now().time_since_epoch().count();
//     static unsigned long long hash_f(unsigned long long x) {
//         x += 0x9e3779b97f4a7c15;
//         x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//         x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//         return x ^ (x >> 31);
//     }
//     int operator()(int x) const { return hash_f(x)^RANDOM; }
// };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;

    while(t--) {
        ll a,b,q;
        cin>>a>>b>>q;

        pair<ll, ll> queries[q];

        for(int i = 0;i<q;i++) {
            cin>>queries[i].first;
            cin>>queries[i].second;
        }

        // gp_hash_table<ll, ll, chash> store;
        unordered_map<ll,ll> store;

        ll min_query = INT_MAX;
        ll max_query = INT_MIN;

        for(auto it : queries) {
            min_query = min(min_query, it.first);
            max_query = max(max_query, it.second);
        }

        store[min_query-1] = 0;
        ll count = 0;

        for(ll i = min_query; i<=max_query;i++) {
            if(((i%a)%b) != ((i%b)%a))
                count++;
            store[i] = count;
        }

        for(auto it : queries) {
            cout<<store[it.second] - store[it.first]<<" ";
        }
        cout<<endl;
    }
}
