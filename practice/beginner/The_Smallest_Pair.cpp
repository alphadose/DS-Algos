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
		cout<<a[0]+a[1]<<endl;
	}
	return 0;
}
