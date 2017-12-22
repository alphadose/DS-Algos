#include <iostream>
using namespace std;


long int gcd(long int x, long int y)
{
    long int r = 0, a, b;
    a = (x > y) ? x : y;
    b = (x < y) ? x : y;
 
    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
 
long int lcm(long int x, long int y, long int hcf)
{
    return x*y/hcf;
}

int main(int argc, char const *argv[])
{
	long int t,a,b,hcf;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		hcf = gcd(a,b);
		cout<<hcf<<" "<<lcm(a,b,hcf)<<endl;
	}
	return 0;
}
