int Solution::searchInsert(vector<int> &A, int target) {
    int n = A.size();
    int start = 0, end = n - 1;
    int mid;
    while(start <= end){
        mid = (start + end) / 2;
        if(target == A[mid]){
            return mid;
        }
        else if(target < A[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return start;
}
