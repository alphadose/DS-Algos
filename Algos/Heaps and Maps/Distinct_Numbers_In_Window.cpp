vector<int> Solution::dNums(vector<int> &A, int B) {
    if(B>A.size()) return vector<int> {};
    int disc = 0;
    map<int, int> store;
    map<int, int>::iterator it;
    vector<int> ans;
    for(int i=0;i<B-1;i++) {
        if(store.find(A[i])==store.end()) disc++;
        store[A[i]]++;
    }
    for(int i=0;i<=A.size()-B;i++) {
        if(store.find(A[i+B-1])==store.end()) {
            disc++;
        }
        store[A[i+B-1]]++;
        ans.push_back(disc);
        store[A[i]]--;
        if(store[A[i]]==0) {
            store.erase(A[i]);
            disc--;
        }
    }
    return ans;
}
