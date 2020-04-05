#include<bits/stdc++.h>
using namespace std;

bool differ_by_1(string a, string b) {
    int diff = 0;
    for(int i=0;i<a.length();++i)
        if(a[i] != b[i]) diff++;
    return diff == 1;
}

struct node {
    string word;
    node* prev;
    int dist;
    node(string w, node* n, int d) : word(w), prev(n), dist(d) {}
};

int main() {
    string begin = "hit";
    string end = "cog";
    vector<string> list = {"hot","dot","dog","lot","log","cog"};

    map<string, vector<string>> graph;

    if(differ_by_1(begin, end)) {
        graph[end].push_back(begin);
        graph[begin].push_back(end);
    }

    for(string l : list) {
        if(differ_by_1(l, begin)) {
            graph[l].push_back(begin);
            graph[begin].push_back(l);
        }
        if(differ_by_1(l, end)) {
            graph[l].push_back(end);
            graph[end].push_back(l);
        }
    }
    for(string l : list) {
        for(string m : list) {
            if(differ_by_1(l, m)) {
                graph[l].push_back(m);
            }
        }
    }

    queue<node*> q;
    q.push(new node(begin, NULL, 0));

    vector<vector<string>> ans;
    vector<node*> pointers;

    while(!q.empty()) {
        node* p = q.front();
        q.pop();
        
        if(p->word == end) {
            pointers.push_back(p);
            int limit = p->dist;
            while(!q.empty()) {
                node* p = q.front();
                q.pop();
                if(p->dist > limit) goto a;
                if(p->word == end) pointers.push_back(p);
            }
        }

        for(string s : graph[p->word]) {
            if(s == p->word) continue;
            q.push(new node(s, p, p->dist + 1));
        }
    }
    a:

    int k = 0;
    for(auto p : pointers) {
        ans.push_back({});
        while(p != NULL) {
            ans[k].push_back(p->word);
            p = p->prev;
        }
        reverse(ans[k].begin(), ans[k].end());
        k++;
    }
    for(auto a : ans) {
        for(auto s : a) cout<<s<<" ";
        cout<<endl;
    }
}
