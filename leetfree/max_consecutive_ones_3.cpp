// Flip at most k zeroes
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,0,0,1,1};
    int k = 1, low = 0, zeroCount = 0, ret = 0;
    for (int i=0; i<nums.size(); i++) {
        if (nums[i] == 0) {
            zeroCount++;
        }
        while (zeroCount > k) {
            if (nums[low] == 0) {
                zeroCount--;
            }
            low++;
        }
        ret = max(ret, i - low + 1);
    }
    
    cout<< ret;
}   
