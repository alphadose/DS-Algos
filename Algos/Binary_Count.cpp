int Solution::findCount(const vector<int> &A, int B) {
    int low = 0, high = A.size() - 1, mid, c=0;
    while(low<=high){
        mid = (low+high)/2;
        if(A[mid]==B) {
            c++;
            for(int i=mid+1;i<A.size();i++) {
                if(A[i]==B)
                    c++;
                else
                    break;
            }
            for(int i=mid-1;i>=0;i--) {
                if(A[i]==B)
                    c++;
                else
                    break;
            }
            break;
        }
        else if(A[mid] < B)
            low = mid+1;
        else
            high = mid-1;
    }
    return c;
}
