#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> A = {4, 5, 2, 25};
    vector<int> A = {0,1,0,2,1,0,1,3,2,1,2,1};

    vector<int> next(A.size(), 0);
    int max_val = INT_MIN;
    for(int i = A.size() - 1; i>=0; i--) {
        if(A[i]>=max_val) {
            max_val = A[i];
            next[i] = 0;
            continue;
        }
        next[i] = max_val;
    }

    vector<int> prev(A.size(), 0);
    max_val = INT_MIN;
    for(int i = 0; i<A.size();i++) {
        if(A[i]>=max_val) {
            max_val = A[i];
            prev[i] = 0;
            continue;
        }
        prev[i] = max_val;
    }

    int water = 0;
    for(int i=0; i<A.size();++i) {
        int tmp = min(next[i], prev[i]);
        if(tmp==0) continue;
        water += (tmp - A[i]);
    }
        
    
    cout<<water;
}
