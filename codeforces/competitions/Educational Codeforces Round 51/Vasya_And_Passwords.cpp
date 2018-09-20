#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin>>t;
    while(t--) {
        cin>>s;
        int small=0, big=0, number = 0;
        for(int i=0;i<s.length();i++) {
            if(s[i]>=65 && s[i]<=90) big++;
            if(s[i]>=97 && s[i]<=122) small++;
            if(s[i]>=48 && s[i]<=57) number++;
        }
        if(number==0) {
            if(big>=small) {
                for(int i=0;i<s.length();i++) {
                    if(s[i]>=65 && s[i]<=90) {
                        s[i] = '1';
                        big--;
                        break;
                    }
                }
            }
            else {
                for(int i=0;i<s.length();i++) {
                    if(s[i]>=97 && s[i]<=122) {
                        s[i] = '1';
                        small--;
                        break;
                    }
                }
            }
        }
        if(big==0) {
            if(number>=small) {
                for(int i=0;i<s.length();i++) {
                    if(s[i]>=48 && s[i]<=57) {
                        s[i] = 'A';
                        number--;
                        break;
                    }
                }
            }
            else {
                for(int i=0;i<s.length();i++) {
                    if(s[i]>=97 && s[i]<=122) {
                        s[i] = 'A';
                        small--;
                        break;
                    }
                }
            }
        }
        if(small==0) {
            if(big>=number) {
                for(int i=0;i<s.length();i++) {
                    if(s[i]>=65 && s[i]<=90) {
                        s[i] = 'a';
                        big--;
                        break;
                    }
                }
            }
            else {
                for(int i=0;i<s.length();i++) {
                    if(s[i]>=48 && s[i]<=57) {
                        s[i] = 'a';
                        number--;
                        break;
                    }
                }
            }
        }
        cout<<s<<endl;
    }
}