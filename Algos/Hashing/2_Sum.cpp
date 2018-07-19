vector<int> Solution::twoSum(const vector<int> &A, int B) {
    int index1, index2, search;
    map<int, int> track;
    for(int i=0;i<A.size();i++) {
        search = B - A[i];
        if(track.find(search)!=track.end()) {
            index1 = min(i, track[search]);
            index2 = max(i, track[search]);
            return vector<int> {index1+1, index2+1};
        }
        if(track.find(A[i])==track.end())
            track[A[i]] = i;
    }
    return vector<int> {};
}