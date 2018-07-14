int Solution::maxArea(vector<int> &A) {
    if(A.size()==1)
        return 0;
    int bestsum=INT_MIN , i=0, j=A.size()-1;
    while(i!=j) {
        bestsum = max(bestsum, min(A[i],A[j])*(j-i));
        if(A[i]<A[j])
            i++;
        else
            j--;
    }
    return bestsum;
}
