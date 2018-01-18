#include <bits/stdc++.h>
 
using namespace std;
 
int gcd(int a,int b){
    if(a == b)
        return a;
    if(a > b)
        return gcd(a-b , b);
    return gcd(a , b-a);
}
 
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int l,b;
        cin>>l>>b;
        int g = gcd(l , b);
        cout << (l/g)*(b/g) << endl;
    }
    return 0;
}