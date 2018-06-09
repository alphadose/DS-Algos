string Solution::countAndSay(int A) {
    string s = "1";
    char a;
    int ctr = 0;
    string temp = "";
    for(int i=0;i<A-1;i++) {
        a = s[0];
        ctr = 0;
        temp = "";
        for(int j=0;j<s.length();j++) {
            if(a==s[j])
                ctr++;
            else {
                temp = temp + to_string(ctr) + a;
                a = s[j];
                ctr = 1;
            }
        }
        temp = temp + to_string(ctr) + a;
        s = temp;
    }
    return s;
}