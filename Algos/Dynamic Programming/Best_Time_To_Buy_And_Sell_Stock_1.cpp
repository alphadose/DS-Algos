int Solution::maxProfit(const vector<int> &A) {
    if(A.size()<=1) return 0;
    vector<vector<int>> ans;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<A.size();i++) {
        if(A[i]>maxi) maxi=A[i];
        if(A[i]<mini) {
            ans.push_back({mini, maxi});
            mini = A[i];
            maxi = INT_MIN;
        }
    }
    int prof = INT_MIN;
    for(int i=0;i<ans.size();i++) {
        if(ans[i][1]-ans[i][0]>prof) {
            prof = ans[i][1]-ans[i][0];
        }
    }
    return prof<0?0:prof;
}
