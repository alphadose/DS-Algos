#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5,  5, 10, 40, 50, 35};

    vector<int> prefix_sum(arr.size(), 0);

    prefix_sum[0] = arr[0];
    prefix_sum[1] = arr[1];

    prefix_sum[2] = arr[2] + arr[0];
    for(int i=3; i<arr.size(); i++)
        prefix_sum[i]+= arr[i] + max(prefix_sum[i-2], prefix_sum[i-3]);
    
    int max_val = INT_MIN;
    for(auto i : prefix_sum) max_val = max(max_val, i);

    cout<<max_val;
}
