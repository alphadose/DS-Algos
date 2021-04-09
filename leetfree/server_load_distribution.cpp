#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int recur(vector<int> &loads, int k, int capacity, vector<vector<int>> &dp) {
    if(k < 0) return 0;

    if(dp[k][capacity] == -1) {
        int selected = (capacity - loads[k] < 0)? 0:(loads[k] + recur(loads, k-1, capacity - loads[k], dp));
        int notSelected = recur(loads, k-1, capacity, dp);
        if(abs(capacity - selected) < abs(capacity - notSelected))
            dp[k][capacity] = selected;
        else
            dp[k][capacity] = notSelected;
    }
    return dp[k][capacity];
}

int minDifference(vector<int> &loads) {
    int sum = accumulate(loads.begin(), loads.end(), 0);
    int capacity = sum/2;
    vector<vector<int>> dp(loads.size(), vector<int>(capacity + 1, -1));
    int ans = recur(loads, loads.size()-1, capacity, dp);
    cout<<ans<<endl;
    cout<<"total "<<loads.size()*(capacity+1)<<endl;
    int ones = 0;
    for(auto i : dp) {
        for(auto j : i) {
            ones += (j == -1);
        }
    }
    cout<<"wasted "<<ones<<endl;
    
    return abs(sum - 2* ans);
}

int main() {
    // vector<int> loads = {1,2,3,4};
    // vector<int> loads = {10, 10, 9, 9, 2};
    vector<int> loads = {1, 1, 1000, 1};
    cout << minDifference(loads) << endl;
    return 0;
}
