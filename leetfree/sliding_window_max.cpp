#include<bits/stdc++.h>
using namespace std;

int get_max(set<int>& store) {
    return *store.rbegin();
}

int main() {
    vector<int> A = {1,3,-1,-3,5,3,6,7};
    int k =3;

    vector<int> ans;
    set<int> store;

    for(int i = 0;i <k;i++) {
        store.insert(A[i]);
    }
    ans.push_back(get_max(store));

    for(int i=1; i<A.size()-k+1;i++) {
        store.erase(A[i-1]);
        store.insert(A[i+k-1]);
        ans.push_back(get_max(store));
    }

    for(auto a : ans) cout<<a<<endl;
}