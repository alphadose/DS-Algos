#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,sum=0;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		sum+=n%10;
		while(n>9)
			n/=10;
		sum+=n;
		cout<<sum<<endl;
	}
	return 0;
}
