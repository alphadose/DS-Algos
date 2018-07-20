vector<int> Solution::lszero(vector<int> &A) {
    int sum;
    vector<int> cum(A.begin(),A.end());
    cum.insert(cum.begin(),0);
    for(int i=1;i<cum.size();i++)
        cum[i]+=cum[i-1];
    map<int, int> track;
    vector<int> ans, fin;
    int maxlen = -1;
    for(int i=0;i<cum.size();i++) {
        if(track.find(cum[i])!=track.end()) {
            if(i - track[cum[i]] - 1 > maxlen) {
                maxlen = i - track[cum[i]] - 1;
                ans = {track[cum[i]],i-1};
            }
        }
        else
            track[cum[i]] = i;
    }
    if(ans.empty()) return ans;
    for(int i=ans[0];i<=ans[1];i++)
        fin.push_back(A[i]);
    return fin;
}