int Solution::minPathSum(vector<vector<int> > &A) {
    for(int i=A[0].size()-2;i>=0;i--)
        A[A.size()-1][i]+=A[A.size()-1][i+1];
    for(int i=A.size()-2;i>=0;i--) {
        A[i][A[0].size()-1]+=A[i+1][A[0].size()-1];
        for(int j=A[0].size()-2;j>=0;j--) {
            A[i][j]+=min(A[i+1][j],A[i][j+1]);
        }
    }
    return A[0][0];
}
