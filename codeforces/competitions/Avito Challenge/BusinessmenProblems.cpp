#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    int n,m;
    long long int cost=0;
    map<int, int> map1, map2, map3;

    cin>>n;
    int a[n],x[n];
    for(int i=0;i<n;i++) {
        cin>>a[i]>>x[i];
        map1[a[i]] = x[i];
    }
    cin>>m;
    int b[m],y[m];
    for(int i=0;i<m;i++) {
        cin>>b[i]>>y[i];
        map2[b[i]] = y[i];
    }
    
    for(int i=0;i<n;i++) {
        if(map2.find(a[i]) != map2.end()) {
            cost+=max(map2[a[i]],map1[a[i]]);
            map1.erase(a[i]);
            map2.erase(a[i]);
            continue;
        }
    }
    for(int i=0;i<n;i++) {
        if(map1.find(a[i]) != map1.end()) {
           cost+=map1[a[i]];
        }
    }
    for(int i=0;i<m;i++) {
        if(map2.find(b[i]) != map2.end()) {
           cost+=map2[b[i]];
        }
    }
    cout<<cost;
}