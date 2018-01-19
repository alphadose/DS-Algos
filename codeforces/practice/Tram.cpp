#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,ctr=0,maximum=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i];
	for(int i=0;i<n;i++)
	{
		ctr+=b[i]-a[i];
		maximum = max(maximum,ctr);
	}
	cout<<maximum;
	return 0;
}
