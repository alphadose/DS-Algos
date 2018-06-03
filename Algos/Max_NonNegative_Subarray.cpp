vector<int> Solution::maxset(vector<int> &A) {
    long long int sum=0,max = INT_MIN;
    vector<vector<long long int> > pos;
    vector<int> ans;
    pos.push_back({});
    pos[0].push_back(0);
    pos[0].push_back(0);
    pos[0].push_back(0);
    int j=0;
    int check =1;
    for(int i=0;i<A.size();i++)
        if(A[i]>=0) {
            check = 0;
            break;
        }
    if(check==1)
        return ans;

    for(int i=0;i<A.size();i++) {
        sum+=A[i];
        if(sum>=max){
            max=sum;
            pos[j][1]=i;
            pos[j][2]=sum;
        }
        if(sum<0 || A[i]<0) {
            sum=0;
            pos.push_back({});
            j++;
            pos[j].push_back(i+1);
            pos[j].push_back(i+1);
            pos[j].push_back(0);
        }
    }
    int pos1,pos2,len=INT_MIN;
    for(int i=pos.size()-1;i>=0;i--) {
        if(pos[i][2]==max)
            if(pos[i][1]-pos[i][0]>=len) {
                len = pos[i][1]-pos[i][0];
                pos1 = pos[i][0];
                pos2 = pos[i][1];
            }
    }
    for(int i=pos1;i<=pos2;i++)
        ans.push_back(A[i]);
        
    return ans;
}
