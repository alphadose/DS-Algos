int Solution::atoi(const string A) {
    int a=0;
    int idx=0;
    int sign = 1;
    for(idx=0;idx<A.length();idx++) {
        if(A[idx]!=' ') {
            if(A[idx]=='-') {
                if(A[idx+1]<48 || A[idx+1]>57) return 0;
                sign = -1;
                continue;
            }
            else if(A[idx]=='+') {
                if(A[idx+1]<48 || A[idx+1]>57) return 0;
                sign = 1;
                continue;
            }
            if(A[idx]<48 || A[idx]>57) return 0;
            else break;
        }
    }
    for(idx;idx<A.length();idx++) {
        if(A[idx]<48 || A[idx]>57) break;
        if(a>=INT_MAX/10-9) {
            if(sign==-1) return INT_MIN;
            else return INT_MAX;
        }
        a = a*10 + A[idx]-48;
    }
    return a*sign;
}
