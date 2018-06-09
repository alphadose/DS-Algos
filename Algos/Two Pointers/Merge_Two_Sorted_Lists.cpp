void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j=0,i=0, flag =1;
    for(i=0;i<B.size();i++) {
        for(;j<A.size();j++) {
            if(B[i]<=A[j]) {
                A.insert(A.begin()+j,B[i]);
                flag = 1;
                break;
            }
            else
                flag = 0;
        }
        if(flag ==0)
            break;
    }
    for(i;i<B.size();i++)
        A.push_back(B[i]);
    
    
}
