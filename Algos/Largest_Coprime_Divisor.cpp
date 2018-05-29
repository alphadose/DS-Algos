int gcd(int a, int b)
{
    // Everything divides 0 
    if (a == 0 || b == 0)
       return 0;
 
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int Solution::cpFact(int A, int B) {
    int div = gcd(A,B);
    while(div!=1) {
        A/=div;
        div = gcd(A,B);
    }
    return A;
}