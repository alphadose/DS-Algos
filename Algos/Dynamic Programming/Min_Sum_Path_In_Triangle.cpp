int Solution::minimumTotal(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for(int i=A.size()-2;i>=0;i--) {
        for(int j=0;j<A[i].size();j++)
            A[i][j]+=min(A[i+1][j+1],A[i+1][j]);
    }
    return A[0][0];
}
