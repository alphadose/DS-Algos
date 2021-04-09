#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    system("");

    long long int l, n;
    cin>>l>>n;

    long long int left = 0, right = n-1;
    
    vector<long long int> x;
    
    for(long long int i = 0; i<n; i++) {
        long long int m;
        cin>>m;
        x.push_back(m);
    }

    long long int sum = 0;
    long long int start = 0;

    while(left <= right) {
        if(start < x[left]) {
            if(x[left] - start  >  l - x[right] + start) {
                sum+= x[left] - start;
                start = x[left];
                left++;
            } else {
                sum+= l - x[right] + start;
                start = x[right];
                right--;
            }
        } else {
             if(start - x[right] >  l - start + x[left]) {
                sum+= start - x[right];
                start = x[right];
                right--;
            } else {
                sum+= l - start + x[left];
                start = x[left];
                left++;
            }
        }
       
    }
    cout<<sum;   
}

// input (stdin)
// 10 3
// 2
// 7
// 9
// Your Output (stdout)
// 7
// Expected Output
// 15
