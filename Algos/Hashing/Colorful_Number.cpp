int Solution::colorful(int A) {
    map<int, int> ans;
    int i,prod=1;
    while(A) {
        i=A;
        prod=1;
        while(i) {
            prod*=i%10;
            if(prod>9) break;
            if(ans.find(prod)!=ans.end())
                return 0;
            ans[prod]=1;
            i/=10;
        }
        A/=10;
    }
    return 1;
}
