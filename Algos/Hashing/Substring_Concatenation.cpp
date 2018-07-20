vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    map<string, int> track;
    map<string, int> temp;
    map<string, int>::iterator it;
    for(int i=0;i<B.size();i++)
        track[B[i]]++;
    int len=B[0].length();
    int flag = 0;
    string str;
    vector<int> ans;
    for(int i=0;i<A.length();i++) {
        temp = track;
        for(int j=i;j<A.length();j+=len) {
            str = A.substr(j, len);
            if(temp.find(str)!=temp.end()) {
                flag=0;
                temp[str]--;
                if(temp[str] < 0) break;
                for(it=temp.begin();it!=temp.end();it++)
                    flag+=it->second;
                if(flag==0) {
                    ans.push_back(i);
                    break;
                }
            }
            else
                break;
        }
        temp.clear();
    }
    return ans;
}