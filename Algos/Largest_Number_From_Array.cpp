// A comparison function which is used by sort() in printLargest()
int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
 
    // then append X at the end of Y
    string YX = Y.append(X);
 
    // Now see which of the two formed numbers is greater
    return XY.compare(YX) > 0 ? 1: 0;
}
 
string Solution::largestNumber(const vector<int> &A) {
    vector<string> temp;
    for(int i=0;i<A.size();i++) {
        temp.push_back(to_string(A[i]));
    }
    string ans= "",ans2="";
    // Sort the numbers using library sort funtion. The function uses
    // our comparison function myCompare() to compare two strings.
    sort(temp.begin(), temp.end(), myCompare);
    while(temp[temp.size()-1]=="0") {
        temp.pop_back();
        if(temp.size()==0)
            break;
    }
    if(temp.empty())
        temp.push_back("0");
    
    for (int i=0; i < temp.size() ; i++ )
        ans+=temp[i];
    
    return ans;
}
