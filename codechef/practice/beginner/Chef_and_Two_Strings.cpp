#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,i,min_diff,max_diff;
	string s1,s2;
	cin>>t;
	while(t--)
	{
		cin>>s1;
		cin>>s2;
		min_diff=max_diff=0;
		i=min(s1.length(),s2.length());
		for(int j=0;j<i;j++)
		{
			if(s1[j]!=s2[j] && s1[j]!='?' && s2[j]!='?')
			{
				max_diff++;
				min_diff++;
			}
			if(s1[j]=='?' || s2[j]=='?')
				max_diff++;
		}
		cout<<min_diff<<" "<<max_diff<<endl;

	}
	return 0;
}
