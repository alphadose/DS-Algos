bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    map<int,int> link;
    int t=0;
    for(int i=0;i<arrive.size();i++) {
        if(link.find(arrive[i])==link.end())
            link[arrive[i]] = 1;
        else
            link[arrive[i]] += 1;
        if(link.find(depart[i])==link.end())
            link[depart[i]] = -1;
        else
            link[depart[i]] -= 1;
    }
    map<int, int>::iterator it;
    for(it=link.begin() ; it!=link.end();it++) {
        t+=it->second;
        if(t>K) return 0;
    }
    return 1;
}