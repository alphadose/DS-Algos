int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=0,len=1;
    for(i;i<A.size();i++) {
        if(A[i]!=A[j]) {
            if((j+1)!=i)
               A.erase(A.begin()+j+1, A.begin()+i); 
            j++;
            i=j;
        }
    }
    return j+1;
}
