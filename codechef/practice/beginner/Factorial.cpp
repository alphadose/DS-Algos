#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long int t,n,i;
	int c;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n;
		i=5;
		while(i<=n)
		{
			c+=int(n/i);
			i*=5;
		}
		cout<<c<<endl;
	}
	return 0;
}
