#include <iostream>
using namespace std;

int sum(int d, int n)
{
	for(int i=1;i<=d;i++)
		n=n*(n+1)/2;
	return n;
}

int main(int argc, char const *argv[])
{
	int t,d,n;
	cin>>t;
	while(t--)
	{
		cin>>d>>n;
		cout<<sum(d,n)<<endl;
	}
	return 0;
}
