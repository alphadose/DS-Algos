#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;
	long int result;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		result = a[0]*(n-1);
		cout<<result<<endl;
	}
	return 0;
}
