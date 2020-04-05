#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 1, 3, 6, 1, 0, 9 };
    int n = sizeof(arr)/sizeof(int);
    int i = 0;
    int count = 0;
    while(i < n-1) {
        int k = arr[i];
        cout<<i<<" "<<k<<endl;
        int check = INT_MAX;
        int idx;
        for(int j = i+1; j<=i+k && j < n;j++) {
            if(arr[j] == 0) continue;
            if(n - j - arr[j] <= check) {
                check = n - j - arr[j];
                idx = j;
            }
        }
        i = idx;
        count++;
    }
    cout<<count;
}
