#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,ctrH[100],ctrA[100],count=0;
	for (int i = 0; i < 100; i++)
	{
		ctrH[i]=0;
		ctrA[i]=0;
	}
	cin>>n;
	int h[n],a[n];
	for(int i=0 ; i <n ; i++)
	{	
		cin>>h[i]>>a[i];
		ctrH[h[i]-1]++;
		ctrA[a[i]-1]++;
	}
	for(int i=0;i<100;i++)
	{
		count+= (ctrH[i]*ctrA[i]);
	}
	cout<<count;
	return 0;
}
