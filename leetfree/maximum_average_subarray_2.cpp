#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,12,-5,-6,50,3};
    int k =1;

    int window_count = 1;
    double sum = arr[0];
    double max_val = 1.0*sum/window_count;
    int start = 0, end = 1;
    int i = 0;

    while(end<arr.size()) {
        while(window_count < k || end < arr.size()) {
            if(window_count>=k && 1.0*sum/window_count > 1.0*(sum+arr[end])/(window_count+1)) break;
            sum+=arr[end++];
            window_count++;
            i++;
            if(window_count >=k) max_val = max(1.0*sum/window_count, max_val);
        }
        while(window_count >= k) {
            max_val = max(1.0*sum/window_count, max_val);
            sum-=arr[start++];
            i++;
            window_count--;
        }
    }
    cout<<max_val<<endl<<i;
}