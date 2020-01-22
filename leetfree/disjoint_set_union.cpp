#include<bits/stdc++.h>
using namespace std;

// Sentence Similarity
class Solution {
    public boolean areSentencesSimilarTwo(String[] words1, String[] words2, String[][] pairs) {
        if (words1.length != words2.length) return false;
        Map<String, Integer> index = new HashMap();
        int count = 0;
        DSU dsu = new DSU(2 * pairs.length);
        for (String[] pair: pairs) {
            for (String p: pair) if (!index.containsKey(p)) {
                index.put(p, count++);
            }
            dsu.union(index.get(pair[0]), index.get(pair[1]));
        }

        for (int i = 0; i < words1.length; ++i) {
            String w1 = words1[i], w2 = words2[i];
            if (w1.equals(w2)) continue;
            if (!index.containsKey(w1) || !index.containsKey(w2) ||
                    dsu.find(index.get(w1)) != dsu.find(index.get(w2)))
                return false;
        }
        return true;
    }
};

class DSU {
    vector<int> parent;
    vector<int> rank;
    
    public:

    DSU(int N) {
        parent.resize(N);
        rank.resize(N);
        fill(rank.begin(), rank.end(), 0);

        for (int i = 0; i < N; ++i)
            parent[i] = i;
    }

    // Path compression
    int Find(int x) {
        if (parent[x] != x) parent[x] = Find(parent[x]);
        return parent[x];
    }

    void Union(int x, int y) {
        int rootX = Find(x);
        int rootY = Find(y);

        if(rank[rootX] > rank[rootY])
            parent[rootY] = rootX;
        else if(rank[rootX] < rank[rootY])
            parent[rootX] = rootY;
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
};
