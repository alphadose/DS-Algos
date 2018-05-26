#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    map <char, int> list;
    int n;
    string s;
    cin>>n>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<n;i++)
        list[s.at(i)]=1;
    cout<< (list.size() == 26 ?"YES":"NO");
}