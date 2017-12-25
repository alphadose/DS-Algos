#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i+=2)
		{	
			if(i != n-1)
			{
				if(a[i] != a[i+1])
				{
					cout<<a[i]<<endl;
					break;
				}
			}
			else
			{
				cout<<a[i]<<endl;
				break;
			}
		}
	}
	return 0;
}
