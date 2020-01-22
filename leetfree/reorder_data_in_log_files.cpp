#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> logs = {"dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"};

    unordered_map<string, int> pos;

    for(int i = 0; i<logs.size(); i++)
        pos[logs[i].substr(0, 4)] = i;

    sort(logs.begin(), logs.end(),
    [&pos](string A, string B){
        string a = A.substr(0, 3);
        string b = B.substr(0, 3);
        if(a == "dig" && b == "dig") {
            a = a + A[3];
            b = b + b[3];
            return pos[a] < pos[b];
        };
        if(a == "dig" && b == "let") return false;
        if(a == "let" && b == "dig") return true;

        string cmp1 = A.substr(5);
        string cmp2 = B.substr(5);

        int compare = cmp1.compare(cmp2);
        if(compare == 0) return A.substr(0, 4).compare(B.substr(0, 4)) < 0;

        return compare < 0;
    });

    for(string log : logs) cout<<log<<endl;
}
