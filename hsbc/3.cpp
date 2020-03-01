#include<bits/stdc++.h>
using namespace std;

struct elem {
    int maxIndex;
    string word;
    int currIndex;
    elem(string a, int b, int c): word(a), currIndex(b), maxIndex(c) {}
};

struct lex_compare {
    bool operator() (const elem& lhs, const elem& rhs) const {
        return lhs.maxIndex < rhs.maxIndex;
    }
};

int main() {
    string s = "bacdebfganc";
    set<elem, lex_compare> se;
    map<char, vector<int>> llist;

    for(int i=0;i<s.size();++i) {
        if(!llist[s[i]].empty()) {
            for(auto it = se.begin(); it != se.end(); ++it) {
                string tmp_word = it->word;
                int tmp_curr_index = it->currIndex;
                for(auto j : llist[s[i]]) {
                    if(j>= tmp_curr_index && j<= it->maxIndex) {
                        tmp_curr_index = j;
                    }
                }
                if(tmp_curr_index != it->currIndex) {
                    tmp_word += s[i];
                    int max_idx = it->maxIndex;
                    se.erase(it);
                    se.insert(elem(tmp_word, tmp_curr_index, max_idx));
                }
            }
            auto it = se.begin();
            while(it != se.end()) {
                if(it->word == to_string(s[i])) {
                    it = se.erase(it);
                } else {
                    ++it;
                }
            }
            se.insert(elem(string(1, s[i]), llist[s[i]][0], i-1));
        }
        llist[s[i]].push_back(i);
    }
    int max_val = INT_MIN;
    string ans = "";
    for(auto s: se) {
        if(int(s.word.size()) > max_val) {
            max_val = s.word.size();
            ans = s.word;
        }
    }
    ans+=ans;
    cout<<ans;
}
