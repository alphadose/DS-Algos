#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]-1]=i+1;
	}
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	return 0;
}
