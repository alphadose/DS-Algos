#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int t,amber,brass;
	cin>>t;
	while(t--)
	{
		cin>>s;
		amber=brass=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='a')
				amber++;
			else
				brass++;
		}
		cout<<min(amber,brass)<<endl;
	}
	return 0;
}
