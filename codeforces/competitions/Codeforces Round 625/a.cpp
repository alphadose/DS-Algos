#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    int r[n];
    int b[n];

    for(int i=0;i<n;++i) cin>>r[i];
    for(int i=0;i<n;++i) cin>>b[i];

    double sum_opp = 0, sum_self = 0, tie=0;
    for(int i=0;i<n;++i) {
        if(r[i]==0 && b[i]==1) sum_opp++;
        if(r[i]==1 && b[i]==0) sum_self++;
    }

    double out;
    if(sum_self==0) out = -1;
    else if(sum_opp==0 || sum_self > sum_opp) out = 1;
    else {
        double remain = sum_opp - sum_self;
        out = sum_opp/sum_self + 1;
    }

    cout<<int(out);
}
