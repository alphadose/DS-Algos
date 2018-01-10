#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,count1,count2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		count1=count2=0;
		long int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			if(a[i]<=a[i+1])
			{
				count1++;
				count2++;
			}
			else
			{
				count1+=count2;
				count2=0;
			}
		}
		cout<<count1+n<<endl;
	}
	return 0;
}
