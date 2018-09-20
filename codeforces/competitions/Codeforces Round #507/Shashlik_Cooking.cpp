#include<bits/stdc++.h>
using namespace std;

void recurse(int n, int k, vector<int> &pos, int &ctr, int &mini, bool &flag, int track) {
    if(n==0) {
        mini = min(mini, ctr);
        flag = true;
    }
    if(n<=0 || track>n) return;
    for(int i = 2*k+1;i>=k+1;i--) {
        ctr++;
        pos.push_back(track);
        recurse(n-i, k , pos, ctr, mini, flag, track-2*k-1);
        if(flag) return;
        pos.pop_back();
        track++;
        ctr--;
    }
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> pos;
    int ctr = 0;
    int mini = INT_MAX;
    bool flag = false;
    if(k>=n/2+1) {
        cout<<1<<endl;
        cout<<n/2;
        return 0;
    }
    recurse(n, k, pos, ctr, mini, flag, n-k);
    cout<<mini<<endl;
    int final = pos[0];
    while(final>0) {
        cout<<final<<" ";
        final = final - 2*k - 1;
    }
}