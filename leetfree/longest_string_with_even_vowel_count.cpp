#include<bits/stdc++.h>
using namespace std;

string findTheLongestSubstring(string s) {
    unordered_map<int, int> m{{0, -1}};
    string vowels = "aeiou";
    pair<int, int> final;
    int res = 0, n = s.length(), mask = 0;
    for (int i = 0; i < n; i++) {
        int pos = vowels.find(s[i]);
        if(pos != string::npos) mask ^= (1 << pos);
        if (m.find(mask) == m.end()) m[mask] = i;
        if(i - m[mask] > res) {
            res = i - m[mask];
            final = {m[mask]+1, i};
        }
    }
    return s.substr(final.first, final.second - final.first +1);
}

int main() {
    cout<<findTheLongestSubstring("aqwrteakjeaghev")<<endl;
}
