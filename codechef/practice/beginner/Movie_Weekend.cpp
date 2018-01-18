#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,max,idx;
	cin>>t;
	while(t--)
	{
		cin>>n;
		max=idx=0;
		int l[n],r[n],s[n],index[100];
		for(int i=0;i<n;i++)
			cin>>l[i];
		for(int i=0;i<n;i++)
		{
			cin>>r[i];
			s[i]=l[i]*r[i];
			if(s[i]>max)
				max=s[i];
		}
		for(int i=0;i<n;i++)
		{
			if(s[i]==max)
				index[idx++]=i;
		}
		max=0;
		for(int i=0;i<idx;i++)
		{
			if(r[index[i]]>max)
				max=r[index[i]];
		}
		for(int i=0;i<idx;i++)
		{
			if(r[index[i]]==max)
			{
				cout<<index[i]+1<<endl;
				break;
			}
		}
	}
	return 0;
}
