#include <iostream>
using namespace std;

int main() {
    string s1, s2, s3;
    int a[26], b[26];
    for(int i=0;i<26;i++) {
        a[i]=0;
        b[i]=0;
    }
    cin>>s1>>s2>>s3;
    string s = s1+s2;
    if(s.length()!=s3.length()) {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<s.length();i++) {
        a[int(s.at(i))-65]++;
        b[int(s3.at(i))-65]++;
    }
    int flag=1;
    for(int i=0;i<26;i++) {
        if(a[i]!=b[i]) {
            flag=0;
            break;
        }
    }
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";   
}