#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n,k;
    map<int,int> list;
    vector<int> indices;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(list.find(a[i])==list.end())
            list[a[i]]=i+1;
    }
    map<int,int>::iterator it;
    for(it=list.begin();it!=list.end();it++) {
        k--;
        indices.push_back(it->second);
        if(k==0) {
            cout<<"YES"<<endl;
            sort(indices.begin(),indices.end());
            for(int i=0;i<indices.size();i++)
                cout<<indices[i]<<" ";
            return 0;
        }
    }
    cout<<"NO";
    
}