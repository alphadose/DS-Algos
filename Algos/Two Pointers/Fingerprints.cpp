#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
    int n,m;
    vector<int> ans;
    cin>>n>>m;
    int a[n],b[m];
    map<int, int> store;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++) {
        cin>>b[i];
        store[b[i]] = 1;
    }
    int j=0;
    for(int i=0;i<n;i++) {
        if(store[a[i]]==1) {
            ans.push_back(a[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}