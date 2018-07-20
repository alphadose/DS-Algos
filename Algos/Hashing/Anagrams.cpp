vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> > ans;
    map<string, vector<int>> track;
    string str;
    for(int i=0;i<A.size();i++) {
        str = A[i];
        sort(str.begin(),str.end());
        track[str].push_back(i+1);
    }
    map<string, vector<int>>::iterator it;
    for(it=track.begin();it!=track.end();it++)
        ans.push_back(it->second);
    return ans;
}