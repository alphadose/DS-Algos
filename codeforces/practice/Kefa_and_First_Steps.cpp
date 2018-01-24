#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v;
	int ctr,n,maximum;
	cin.tie(NULL);
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		cin>>ctr;
		v.push_back(ctr);
	}
	ctr=maximum=0;
	for(int i=0;i<n-1;i++)
	{
		if(v[i]>v[i+1])
		{	
			maximum = max(ctr,maximum);
			ctr=0;
		}
		else
			ctr++;
	}
	maximum = max(ctr,maximum);
	cout<<maximum+1;
	return 0;
}
