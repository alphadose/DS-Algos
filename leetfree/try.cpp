#include<bits/stdc++.h>

using namespace std;

int main() {
    // string s = "abcd";

    // for (int i=0;i<s.length()-1;i++) {
    //     for(int j=1; i+j<=s.length();j++)
    //         cout<<s.substr(i, j)<<"\n";
    // }
    // if (s.substr(0, 0)=="") {
    //     cout<<"kekw"<<"\n";
    // }
    // vector<int> A{1,2,3,4,5};
    // auto it = A.erase(A.begin(), A.begin()+3);
    // cout<<*it<<endl;
    // cout<<*(it+1)<<endl;
    // for(auto a: A) cout<<a<<endl;

    // map<pair<int, int>, int> kekw;

    // kekw[make_pair(1,3)] = 69;
    // cout<<kekw[make_pair(1,3)];

    // string s = "elma";
    // // cout<<'9'-'0';
    // // cout<<s.compare("elna");
    
    // vector<string> A = {"b", "a", "k"};

    vector<string> A = {"mobile","mouse","moneypot","monitor","mousepad"};

    sort(A.begin(), A.end(),
    [](string a, string b) {
        return a.compare(b) < 0;
    });

    for(auto a : A) cout<<a<<endl;

}