#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,f,count;
	cin>>t;
	while(t--)
	{	
		count=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>f;
		int b[f];
		for(int i=0;i<f;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
		{
			if(a[i]==b[count])
			{
	            count++;
	        }
	        if(count==f)
	        {
	            break;
	        }
		}
		if(count==f)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
