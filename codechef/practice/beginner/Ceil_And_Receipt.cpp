#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[12],i=1;
	for(int j=0;j<12;j++)
	{
		a[j]=i;
		i*=2;
	}
	int t,c,p;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>p;
		i=11;
		while(p>0)
		{
			if(p>=a[i])
			{
				p-=a[i];
				c++;
			}
			else if(i>=1)
			{
				i--;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
