unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int bit1,bit2;
    for(int i=0;i<16;i++) {
        bit1 = (A & 1<<i)>>i;
        bit2 = (A & 1<<(31-i))>>(31-i);
        if(bit1==0)
            A = A & ~(1<<(31-i));
        else
            A = A | 1<<(31-i);
        if(bit2==0)
            A = A & ~(1<<i);
        else
            A = A | 1<<i;
    }
    return A;
    
}