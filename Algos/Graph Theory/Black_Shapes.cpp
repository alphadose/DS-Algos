bool isValid(int row, int col, vector<string> &A) {
    if(row<0 || row>=A.size()) return false;
    if(col<0 || col>=A[0].size()) return false;
    if(A[row][col]=='X')
        return true;
    else
        return false;
}
void dfs(vector<string> &A, vector<vector<int>> &visited, vector<vector<int>> &paths, int row, int col) {
    int x,y;
    visited[row][col] = 1;
    for(int i=0;i<paths.size();i++) {
        x = row + paths[i][0];
        y = col + paths[i][1];
        if(isValid(x, y, A)) {
            if(!visited[x][y])
                dfs(A, visited, paths, x, y);
        }
    }
}
int Solution::black(vector<string> &A) {
    vector<vector<int>> paths;
    vector<vector<int>> positions;
    vector<vector<int>> visited;
    visited.resize(A.size());
    paths.push_back({1,0});
    paths.push_back({-1,0});
    paths.push_back({0,-1});
    paths.push_back({0,1});
    int shapes = 0;
    for(int i=0;i<A.size();i++)
        for(int j=0;j<A[0].size();j++) {
            visited[i].push_back(0);
            if(A[i][j]=='X')
                positions.push_back({i,j});
        }
    int x, y;
    for(int i=0;i<positions.size();i++) {
        x = positions[i][0];
        y = positions[i][1];
        if(!visited[x][y]) {
            dfs(A, visited, paths, x, y);
            shapes++;
        }
    }
    return shapes;
}
