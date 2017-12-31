#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,count;
	cin>>t;
	while(t--)
	{
		cin>>n;
		count=0;
		long int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(int i=n-1;i>=1;i--)
		{
			a[i]-=a[i-1];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]>=b[i])
				count++;
		}
		cout<<count<<endl;

	}
	return 0;
}
