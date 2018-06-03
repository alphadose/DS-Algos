vector<int> Solution::findPerm(const string s, int n) {
    int max=n,min=1;
    vector <int> res;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='I')
        {
            res.push_back(min);
            min++;
        }
        else
        {
            res.push_back(max);
            max--;
        }
    }
    res.push_back(min);
    return res;
}
