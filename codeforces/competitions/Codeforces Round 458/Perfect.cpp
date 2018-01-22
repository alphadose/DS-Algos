#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long int n;
	cin>>n;
	long int maxi = -pow(10,6);
	long double a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>=0)
		{
			if(a[i]>maxi && sqrt(abs(a[i]))!=int(sqrt(abs(a[i]))))
			{
				maxi=a[i];
			}
		}
		else
		{
			if(a[i]>maxi)
			{
				maxi=a[i];
			}
		}
	}
	cout<<(long int)maxi;
	return 0;
}
