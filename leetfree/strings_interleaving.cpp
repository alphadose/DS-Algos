#include <bits/stdc++.h> 
using namespace std; 

void find(vector<string> query, set<char>& visited, string s, vector<string> &ans, int kek) {
    if(s.length() == (query[0].length() + query[1].length())) {
        ans.push_back(s);
        return;
    }
    for(string se : query) {
        for(int i = kek; i< se.length();++i) {
            if(visited.find(se[i]) != visited.end()) continue;
            visited.insert(se[i]);
            find(query, visited, s+se[i], ans, i+1);
            visited.erase(se[i]);
        }
        kek = 0;
    }
}

int main() {
    vector<string> ans;
    set<char> visited;
    find(vector<string>{"AB","CD"}, visited, "", ans, 0);

    for(auto a : ans) cout<<a<<endl;
}
