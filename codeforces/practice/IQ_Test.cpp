#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,even=0,odd=0,last_odd,last_even;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even++;
			last_even=i+1;
		}
		else
		{
			odd++;
			last_odd=i+1;
		}
	}
	if(even==1)
		cout<<last_even;
	else
		cout<<last_odd;


	return 0;
}
