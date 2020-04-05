#include<bits/stdc++.h>
using namespace std;

struct node {
    int vertex;
    int dist;
    int start;
    node(int v, int d, int s): vertex(v), dist(d), start(s) {}
};

set<int> bfs(int start, int end, map<int, set<int>>& graph) {
    queue<node> q;

    q.push(node(start, 0, 0));
    set<int> neighbours;

    int max_val = INT_MAX;

    while(!q.empty()) {
        node p = q.front();
        q.pop();
        if(p.vertex==end) {
            max_val = p.dist;
            neighbours.insert(p.start);
            while(!q.empty() && p.dist == max_val) {
                p = q.front();
                q.pop();
                if(p.dist > max_val) break;
                if(p.vertex==end) {
                    neighbours.insert(p.start);
                }
            }
            return neighbours;
        }

        for(auto it = graph[p.vertex].begin(); it != graph[p.vertex].end(); ++it) {
            if(*it == p.vertex) continue;
            if(p.dist == 0) {
                q.push(node(*it, p.dist +1, *it));
            }
            else {
                q.push(node(*it, p.dist +1, p.start));
            }
        }
    }
    return neighbours;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int m;
    cin>>n>>m;

    int a,b;
    map<int, set<int>> graph;
    for(int i=0;i<m;++i) {
        cin>>a>>b;
        graph[a].insert(b);
    }

    int k;
    cin>>k;
    int path[k];
    for(int i=0;i<k;++i) cin>>path[i];

    int mini = 0, maxi = 0;
    for(int i=1;i<k;++i) {
        auto neighbours = bfs(path[i-1], path[k-1], graph);
        cout<<path[i-1]<<" -> ";
        for(auto meow : neighbours) cout<<meow<<" ";
        cout<<endl;
        mini++; maxi++;
        if(neighbours.find(path[i]) != neighbours.end()) {
            mini--;
            if(neighbours.size() == 1) maxi--;
        }
    }
    cout<<mini<<" "<<maxi;
}
