#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	long long int n,k,count;
	long double div;
	cin>>t;

	while(t--)
	{
		cin>>n>>k;
		count = 0;
		long long int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		{
			div = double(a[i])/double(k);
			if(div != int(div))
			{
			if(int(div) != 0)
				count= count+min(abs(a[i] - k*int(div)),abs(a[i] - k*(int(div)+1)));
			else
				count=count+k-a[i];
			}
		}
		cout<<count<<endl;
	}

	return 0;
}
