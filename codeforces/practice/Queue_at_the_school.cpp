#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,t,i;
	string s,s2;
	cin>>n>>t;
	cin>>s;
	while(t--)
	{
		s2="";
		i=0;
		while(s2.length()!=n)
		{
			if(s[i]=='B' && s[i+1]=='G')
			{
				s2+="GB";
				i++;
			}
			else
				s2+=s[i];
			i++;
		}
		s=s2;
	}
	cout<<s;
	return 0;
}
