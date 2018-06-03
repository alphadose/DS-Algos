// idea is floyd cycle algorithm to find repetitions
// in array.

// if a repetition is present find the start of the cycle
int Solution::repeatedNumber(const vector<int> &A) {
    int arraySize = A.size();
    if (arraySize <= 1) {
        return -1;
    }
    int slow = A[0];
    int fast = A[A[0]];
    
    while (slow != fast) {
        slow = A[slow];
        fast = A[A[fast]];
    }
    
    fast = 0;
    while (fast != slow) {
        slow = A[slow];
        fast = A[fast];
    }
    
    return fast;
}