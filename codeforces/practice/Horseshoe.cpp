#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int s[4],c=0;
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    sort(s,s+4);
    if(s[0]==s[1])
        c++;
    if(s[1]==s[2])
        c++;
    if(s[2]==s[3])
        c++;
    cout<<c;
}