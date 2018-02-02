#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,grp=0;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<n;i++)
	{
		if(s[i][0]==s[i-1][1])
			grp++;

	}
	cout<<grp+1;
	return 0;
}
