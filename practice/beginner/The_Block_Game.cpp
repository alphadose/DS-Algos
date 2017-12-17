#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,rev,p;
	cin>>t;
	while(t--)
	{
		rev=0;
		cin>>n;
		p=n;
		while(p>0)
		{
			rev=rev*10+p%10;
			p/=10;
		}
		if(n==rev)
			cout<<"wins"<<endl;
		else
			cout<<"losses"<<endl;
	}
	return 0;
}
