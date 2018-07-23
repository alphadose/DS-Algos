bool isPalindrome(string s) {
    string str = s;
    reverse(str.begin(),str.end());
    if(s==str) return true;
    else return false;
}

bool part(string &A, int idx, vector<string> &temp, vector<vector<string>> &ans) {
    string check="";
    int flag = 1;
    for(int i=0;i<temp.size();i++) {
        if(!isPalindrome(temp[i])) flag = 0;
        check+=temp[i];
    }
    if(check.size()==A.size()) {
        if(flag==1) {
            ans.push_back(temp);
            return true;
        }
        else
            return false;
    }
    string str;
    for(int len=1; len<=A.length()-idx;len++) {
        str = A.substr(idx,len);
        temp.push_back(str);
        part(A, idx+len, temp, ans);
        temp.pop_back();
    }
}

vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string> temp;
    vector<vector<string>> ans;
    part(A, 0, temp, ans);
    return ans;
}