int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=1,j=0;
    for(i;i<A.size()-1;i++) {
        if(A[i]==A[i-1]) {
            for(j=i+1;j<A.size();j++) {
                if(A[j]!=A[i])
                    break;
            }
        A.erase(A.begin()+i+1, A.begin()+j);
        }
    }
    return A.size();
    
}
