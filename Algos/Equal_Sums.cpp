#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main() {
    int k,n,val,j=0,f;
    map<int, vector<int> > list;
    map<int, int> sum;
    cin>>k;
    f=k;
    while(f--) {
        cin>>n;
        list[j].push_back({});
        sum[j] = 0;
        for(int i=0;i<n;i++) {
            cin>>val;
            sum[j]+=val;
            list[j].push_back(val);
        }
        sort(list[j].begin(),list[j].end());
        j++;
    }
    for(int i=0;i<k-1;i++)
        for(j=i+1;j<k;j++) {
            if(sum[j]-list[j].back()>sum[i]-list[i].front())
                continue;
            
            
        }


}