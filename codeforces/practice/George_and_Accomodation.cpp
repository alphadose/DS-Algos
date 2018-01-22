#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,p,q,ctr=0;
	cin>>n;
	while(n--)
	{
		cin>>p>>q;
		if(q-p>=2)
			ctr++;
	}
	cout<<ctr;
	return 0;
}
