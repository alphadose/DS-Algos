#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,1,0,0,1};

    int maxval = INT_MIN;

    for(int i=0;i<arr.size();i++) {
        if(arr[i] == 0) {
            int count = 1;
            for(int j=i-1; j>=0 && arr[j]==1; j--) count++;
            for(int j=i+1; j<arr.size() && arr[j]==1; j++) count++;
            maxval = max(count, maxval);
        }
    }

    maxval = (maxval==INT_MIN)? arr.size(): maxval;
    cout<< maxval;
}