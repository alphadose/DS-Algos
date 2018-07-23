bool validate(string s) {
    stack<char> check;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='(') check.push(s[i]);
        if(s[i]==')') {
            if(check.size()==0) return false;
            else {
                if(check.top()!='(')
                    return false;
                else
                    check.pop();
            }
        }
    }
    if(check.size()==0) return true;
    else return false;
}

bool gen(int n, string s, vector<string> &ans) {
    if(n==0) {
        if(validate(s))
            ans.push_back(s);
        return true;
    }
    string arr[] = {"(",")"};
    string temp;
    for(int i=0;i<=1;i++) {
        temp = s;
        s+=arr[i];
        gen(n-1, s, ans);
        s = temp;
    }
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> ans;
    gen(2*A, "", ans);
    return ans;
}