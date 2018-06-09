vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> intersect;
    int i=0,j=0;
    for(i;i<A.size();i++) {
        for(j;j<B.size();j++) {
            if(A[i]==B[j]) {
                intersect.push_back(A[i]);
                j++;
                break;
            }
            else if(B[j]>A[i])
                break;
        }
    }
    return intersect;
}
