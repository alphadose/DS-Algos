#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,c=0;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n;
		while(n>0)
		{
			if(n%10==4)
				c++;
			n/=10;
		}
		cout<<c<<endl;
	}
	return 0;
}
