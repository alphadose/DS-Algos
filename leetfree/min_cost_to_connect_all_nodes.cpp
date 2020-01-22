#include<bits/stdc++.h>
using namespace std;

class UnionFind {
    public:

    vector<int> parent;
    vector<int> rank;
    
    int count;
    
     UnionFind(int N) {
        parent.resize(N);
        count = N;
        rank.resize(N);
        fill(rank.begin(), rank.end(), 0);
        for (int i = 0; i < N; i++) {
            parent[i] = i;
        }
    }
    
     void Union(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if(rank[rootX] > rank[rootY])
                parent[rootY] = rootX;
            else if(rank[rootX] < rank[rootY])
                parent[rootX] = rootY;
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
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
    int n = 7; 
    vector<vector<int>> edges = {{1, 4}, {4, 5}, {2, 3}};
    vector<vector<int>> newEdges = {{1, 2, 5}, {1, 3, 10}, {1, 6, 2}, {5, 6, 5}};

    sort(newEdges.begin(), newEdges.end(), 
    [] (vector<int> A, vector<int> B){
        return A[2] < B[2];
    });

    UnionFind dsu = UnionFind(n);

    for(auto edge : edges) dsu.Union(edge[0], edge[1]);

    int cost = 0;

    for(auto edge : newEdges) {
        if(dsu.find(edge[0]) != dsu.find(edge[1])) {
            dsu.Union(edge[0], edge[1]);
            cost += edge[2];
        }
    }
    cout<<cost<<endl;

    for_each(dsu.rank.begin(), dsu.rank.end(), [](int kekw){
        cout<<kekw<<endl;
    });
}
