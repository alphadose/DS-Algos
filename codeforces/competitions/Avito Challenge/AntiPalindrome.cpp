#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
bool isPalindrome(string str)
{
    int n = str.size();
    for (int i=0; i < n/2; i++)
        if (str.at(i) != str.at(n-i-1))
            return false;
 
    return true;
}

int maxLengthNonPalinSubstring(string str)
{
    int n = str.size();
    char ch = str.at(0);
 
 
    int i = 1;
    for (i=1; i<n; i++)
        if (str.at(i) != ch)
            break;
 
    
    if (i == n)
        return 0;
 
    if (isPalindrome(str))
        return n-1;
 
    return n;
}
 
int main()
{   
    string s;
    cin>>s;
    cout<< maxLengthNonPalinSubstring(s);
    return 0;
}