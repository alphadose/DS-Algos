#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a;
    a.resize(n);
    for(int i=0; i<n;i++)
        cin>>a[i];
    
    map<int, int> track;
    vector<int> nice;

    for(int i=0;i<n;i++) {
        if(track.find(a[i])!=track.end()) track[a[i]] = -1;
        else track[a[i]] = i;
    }

    for(int i=0;i<n;i++) {
        if(track[a[i]] != -1 )
        nice.push_back(a[i]);
    }

    if(nice.size()%2!=0) {
        cout<<"NO";
        return 0;
    }

    cout<<"YES"<<endl;

    track.clear();

    map<int, char> mapper;
    for(int i=0;i<nice.size()/2;i++)
        mapper[nice[i]] = 'A';
    for(int i=nice.size()/2;i<nice.size();i++)
        mapper[nice[i]] = 'B';
    
    for(int i=0; i<n;i++) {
        if(mapper.find(a[i])!=mapper.end()) cout<<mapper[a[i]];
        else cout<<'A';
    } 

}