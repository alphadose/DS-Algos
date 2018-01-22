#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,ctr=0,flag=0;
	cin>>n;
	string ans[]={"NO","YES"};
	int a[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	while(a[ctr]<=n)
	{	
		if(double(n)/a[ctr]==int(double(n)/a[ctr]))
		{
			flag=1;
			break;
		}
		ctr++;
	}
	cout<<ans[flag];
	return 0;
}
