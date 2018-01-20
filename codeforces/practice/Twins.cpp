#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,sum=0,sum2=0,count=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		if(sum2 <= sum)
		{
			sum2+=a[i];
			sum-=a[i];
			count++;
		}
		else
			break;
	}
	cout<<count;
	return 0;
}
