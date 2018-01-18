#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,r;
	cin>>t;
	while(t--)
	{
		r=0;
		cin>>n;
		while(n>0)
		{
			r=r*10+(n%10);
			n/=10;
		}
		cout<<r<<endl;
	}
	return 0;
}
