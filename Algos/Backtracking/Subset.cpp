bool solve(vector<int> &A, vector<int> &temp, set<vector<int> > &ans, int curr) {
    set<int> check;
    if(temp.size()==A.size() || curr==A.size()) { 
        check = set<int> (temp.begin(),temp.end());
        ans.insert(vector<int> (check.begin(),check.end()));
        return true;
    }
    for(int i=curr;i<A.size();i++) {
        check = set<int> (temp.begin(),temp.end());
        ans.insert(vector<int> (check.begin(),check.end()));
        temp.push_back(A[i]);
        solve(A, temp, ans, i+1); // Recurse
        temp.pop_back(); // Backtrack
    }
    return false;
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int> temp;
    set<vector<int> > ans;
    solve(A, temp, ans, 0);
    return vector<vector<int> > (ans.begin(),ans.end());
}