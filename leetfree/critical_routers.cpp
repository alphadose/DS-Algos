#include<bits/stdc++.h>
using namespace std;

class UnionFind {
    public:

    vector<int> parent;
    int count;
    
     UnionFind(int N) {
        parent.resize(N);
        count = N;
        for (int i = 0; i < N; i++) {
            parent[i] = i;
        }
    }
    
     void Union(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            parent[rootX] = rootY;
            count--;
        }
    }
    
     int query() {
        return count;
    }
    
     void increaseCount() {
        count++;
    }
    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
};

int main() {
    int nodes = 7;
    vector<pair<int, int>> edges = {
        {0, 1}, {0, 2}, {1, 3}, {2, 3}, {2, 5}, {5, 6}, {3, 4}
    };

    vector<UnionFind> dsu(nodes, UnionFind(nodes));

    for(int i=0; i<nodes; i++) {
        UnionFind dsu = UnionFind(nodes);
        for(auto edge: edges) {
            if(edge.first == i || edge.second == i) continue;
            dsu.Union(edge.first, edge.second);
        }
        if(dsu.count != 2) cout<<i<<endl;
    }
}
