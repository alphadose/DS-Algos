/*
A 2d grid map of m rows and n columns is initially filled with water. 
We may perform an addLand operation which turns the water at position (row, col) into a land. 
Given a list of positions to operate, count the number of islands after each addLand operation. 
An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. 
You may assume all four edges of the grid are all surrounded by water.
Example:
Given m = 3, n = 3, positions = [[0,0], [0,1], [1,2], [2,1]].
Initially, the 2d grid grid is filled with water. (Assume 0 represents water and 1 represents land).
0 0 0
0 0 0
0 0 0
Operation #1: addLand(0, 0) turns the water at grid[0][0] into a land.
1 0 0
0 0 0   Number of islands = 1
0 0 0
Operation #2: addLand(0, 1) turns the water at grid[0][1] into a land.
1 1 0
0 0 0   Number of islands = 1
0 0 0
Operation #3: addLand(1, 2) turns the water at grid[1][2] into a land.
1 1 0
0 0 1   Number of islands = 2
0 0 0
Operation #4: addLand(2, 1) turns the water at grid[2][1] into a land.
1 1 0
0 0 1   Number of islands = 3
0 1 0
We return the result as an array: [1, 1, 2, 3]
*/

/*
Thoughts:
1. UnionFind with count of island: initially 0 island, with addLand, it creates land.
2. Need to union with the 4 directions every time when adding new land.
3. Turn 2D array into 1D, then use unionFind.
4. have query function in UnionFind to get final result.
Time: O(k logm*n): k = positions.length; union(x,y) time is log(m*n)
https://en.wikipedia.org/wiki/Proof_of_O(log*n)_time_complexity_of_union%E2%80%93find
*/

#include<bits/stdc++.h>
using namespace std;

class UnionFind {
    vector<int> parent;
    int count;
    
     UnionFind(int N) {
        parent.resize(N);
        count = 0;
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
}

class Solution {
     List<Integer> numIslands2(int m, int n, int[][] positions) {
        List<Integer> rst = new ArrayList<>();
        if (validateInput(m, n, positions)) {
            return rst;
        }
        
        int[] dx = {0, 0, 1, -1};
        int[] dy = {1, -1, 0, 0};
        int[][] grid = new int[m][n];
        UnionFind unionFind = new UnionFind(m * n);
        
        for (int i = 0; i < positions.length; i++) {
            int x = positions[i][0];
            int y = positions[i][1];
            if (grid[x][y] == 1) { // no need to fill
                continue;
            }
            grid[x][y] = 1;
            unionFind.increaseCount();
            for (int j = 0; j < dx.length; j++) {
                int movedX = x + dx[j];
                int movedY = y + dy[j];
                if (validateBorder(grid, movedX, movedY, m, n)) {
                    unionFind.union(x * n + y, movedX * n + movedY);
                }
            }
            rst.add(unionFind.query());
        }

        return rst;
    }

    private boolean validateBorder(int[][] grid, int x, int y, int m, int n) {
        return x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == 1;
    }

    private boolean validateInput(int m, int n, int[][] positions) {
        return m <= 0 || n <= 0 || positions == null || positions.length == 0 || positions[0] == null || positions[0].length == 0;
    }
}
