void climb(int &A, int &ans, int &sum) {
    if(sum==A) {
        ans++;
        return;
    }
    if(sum>A) return;
    for(int i=1;i<=2;i++) {
        sum+=i;
        climb(A, ans, sum);
        sum-=i;
    }
}
int Solution::climbStairs(int A) {
    int ans=0, sum=0;
    climb(A, ans, sum);
    return ans;
}
