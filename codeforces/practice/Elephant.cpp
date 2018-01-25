#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,ctr=0;
	cin>>x;
	for(int i=5;i>=1;i--)
	{
		ctr+=x/i;
		x%=i;
	}
	cout<<ctr;
	return 0;
}
