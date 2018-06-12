#include<iostream>
using namespace std;

int main() {
    long long int n,m,a,b;
    cin>>n>>m>>a>>b;
    long long int mod = (n%m)*b;
    long long int mod2 = ((n/m+1)*m-n)*a;
    long long int mod3 = (n-(n/m-1)*m)*b;
    cout<<min(mod,min(mod2,mod3));
}