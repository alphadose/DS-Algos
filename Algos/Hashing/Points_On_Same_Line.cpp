int Solution::maxPoints(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()<=1) return A.size();
    long double slope;
    map<long double, int> track;
    int maxcount = INT_MIN;
    int same = 0;
    map<long double, int>::iterator it;
    for(int i=0;i<A.size()-1;i++) {
        same = 0;
        for(int j=i+1;j<A.size();j++) {
            if(A[i]==A[j] && B[i]==B[j]) {
                same++;
                continue;
            }
            if(A[j]-A[i]==0) slope = INT_MAX;
            else slope = ((B[j]-B[i])*1.0)/((A[j]-A[i])*1.0);
            track[slope]++;
        }
        maxcount = max(maxcount, same);
        for(it=track.begin();it!=track.end();it++)
            maxcount = max(maxcount, it->second+same);
        track.clear();
    }
    return maxcount+1;
}