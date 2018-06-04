vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > ans; 
    int m = A.size(),n=A[0].size();
    for(int i=0;i<2*m-1;i++)
        ans.push_back({});
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            ans[i+j].push_back(A[i][j]);
    return ans;
}