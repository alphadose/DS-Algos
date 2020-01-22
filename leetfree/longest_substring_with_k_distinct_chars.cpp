#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "eceba";
    int k =2;

    map<char, int> counter;
    int low = 0;
    int len = INT_MIN;
    for(int i =0; i<s.length(); i++) {
        counter[s[i]]++;
        while(counter.size() > k) {
            if(--counter[s[low]] == 0) {
                counter.erase(s[low]);
            }
            low++;
        }
        len = max(len, i-low+1);
    }
    cout<<len;
}