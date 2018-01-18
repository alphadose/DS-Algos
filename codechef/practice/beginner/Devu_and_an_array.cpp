#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	long int n,q,t;
	cin>>n>>q;	
	long int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];
	
	sort(a,a+n);

	while(q--)
	{
		cin>>t;
		if(t>=a[0] && t<=a[n-1])
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
