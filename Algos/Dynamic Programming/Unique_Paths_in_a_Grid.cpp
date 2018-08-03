int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    vector<vector<int>> ans;
    ans.resize(A.size());

    for(int i=0;i<A.size();i++) {
        for(int j=0;j<A[0].size();j++)
            ans[i].push_back(0);
    }

    for(int i=0;i<A.size();i++)
        if(A[i][0]!=1)
            ans[i][0] = 1;
        else
            break;

    for(int i=0;i<A[0].size();i++)
        if(A[0][i]!=1)
            ans[0][i] = 1;
        else
            break;
    
    for(int i=1;i<A.size();i++) {
        for(int j=1;j<A[0].size();j++)
            if(A[i][j]!=1)
                ans[i][j] += ans[i-1][j] + ans[i][j-1]; 
    }        
    return ans.back().back();
}
