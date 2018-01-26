#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,max=0,min=101,pos1,pos2;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
			pos1=i;
		}
		if(a[i]<=min)
		{
			min=a[i];
			pos2=i;
		}
	}
	if(pos1<pos2)
		cout<<pos1 + n-pos2-1;
	else
		cout<<pos1 + n-pos2-2;
	return 0;
}
