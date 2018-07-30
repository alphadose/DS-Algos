bool isValid(int row, int col, vector<string> &A, string &B, string &temp) {
    if(row<0 || row>=A.size()) return false;
    if(col<0 || col>=A[0].size()) return false;
    if(A[row][col]==B[temp.size()])
        return true;
    else
        return false;
}
void dfs(bool &flag, vector<string> &A, vector<vector<int>> &paths, int row, int col, string &temp, string &B) {
    int x,y;
    if(temp==B) {
        flag = true;
        return;
    }
    string str;
    if(temp.size()==B.size()) return;
    for(int i=0;i<paths.size();i++) {
        x = row + paths[i][0];
        y = col + paths[i][1];
        if(isValid(x, y, A, B, temp)) {
            str = temp;
            temp+=A[x][y];
            dfs(flag, A, paths, x, y, temp, B);
            if(flag) return;
            temp = str;
        }
    }
}
int Solution::exist(vector<string> &A, string B) {
    vector<vector<int>> paths;
    vector<vector<int>> positions;
    paths.push_back({1,0});
    paths.push_back({-1,0});
    paths.push_back({0,-1});
    paths.push_back({0,1});
    bool flag = false;
    string temp = B.substr(0,1);
    for(int i=0;i<A.size();i++)
        for(int j=0;j<A[0].size();j++)
            if(A[i][j]==B[0])
                positions.push_back({i,j});
                
    int x, y;
    for(int i=0;i<positions.size();i++) {
        x = positions[i][0];
        y = positions[i][1];
        dfs(flag, A, paths, x, y, temp, B);
    }
    return flag;    
}
