#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, a[3],ctr1,ctr2=0;
	cin>>n;
	while(n--)
	{
		ctr1 = 0;
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
			if(a[i]==1)
				ctr1++;
		}
		if(ctr1>=2)
			ctr2++;
	}
	cout<<ctr2;
	return 0;
}
