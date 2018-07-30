int distance(string &A, string &B) {
    if(A.size()!=B.size()) return -1;
    int d = 0;
    for(int i=0;i<A.length();i++)
        if(A[i]!=B[i])
            d++;
    return d;
}
void traverse(string start, string &end, vector<string> &dictV, int ctr, int &mini, map<string, vector<string>> &list, set<string> &visited) {
    visited.insert(start);
    if(distance(start, end)==1) {
        mini = min(mini, ctr+1);
        visited.erase(start);
        return;
    }
    if(ctr>=dictV.size()+2) {
        visited.erase(start);
        return;
    }
    vector<string> near = list[start];
    for(int i=0;i<near.size();i++)
        if(visited.find(near[i])==visited.end())
            traverse(near[i], end, dictV, ctr+1, mini, list, visited);
    
    visited.erase(start);
         
}
int Solution::ladderLength(string start, string end, vector<string> &dictV) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int mini = INT_MAX;
    map<string, vector<string>> list;

    for(int i=0;i<dictV.size();i++)
        if(distance(dictV[i],start)==1)
            list[start].push_back(dictV[i]);

    for(int i=0;i<dictV.size();i++)
        for(int j=0;j<dictV.size();j++)
            if(distance(dictV[i],dictV[j])==1)
                list[dictV[i]].push_back(dictV[j]);
    
    set<string> visited;
    traverse(start, end, dictV, 1, mini, list, visited);
    return mini==INT_MAX? 0 : mini;
}
