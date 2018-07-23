bool solve(vector<int> A, vector<int> &temp, int B, int sum, vector<vector<int> > &ans, int curr) {
    if(sum==B) return true;
    if(sum>B) return false;
    for(int i=curr;i<A.size();i++) {
        temp.push_back(A[i]);
        sum+=A[i];
        if(solve(A, temp, B, sum, ans, curr+1))
            if(sum==B)
                ans.push_back(temp);
        sum-=A[i];
        temp.pop_back();
    }
    return false;
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    map<int, int> store,track;
    for(int i=0;i<A.size();i++)
        store[A[i]]++;
    vector<vector<int> > ans;
    vector<int> temp;
    solve(A, temp, B, 0, ans, 0);
    for(int i=0;i<ans.size();i++)
        sort(ans[i].begin(),ans[i].end());
    sort(ans.begin(),ans.end());
    set<vector<int>> tr(ans.begin(),ans.end());
    ans = vector<vector<int>> (tr.begin(),tr.end());
    for(int i=0;i<ans.size();i++) {
        track = store;
        for(int j=0;j<ans[i].size();j++) {
            track[ans[i][j]]--;
            if(track[ans[i][j]] < 0) {
                ans.erase(ans.begin()+i--);
                break;
            }
        }
    }
    return ans;
}