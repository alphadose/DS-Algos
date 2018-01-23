#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,d;
	int ctr=0;
	cin>>n;
	while(n>0)
	{
		d=n%10;
		if(d==4 || d==7)
			ctr++;
		n/=10;
	}
	if(ctr==4 || ctr==7)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
