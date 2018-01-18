#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	string x,y,flag;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		flag="Yes";
		for(int i=0;i<x.length();i++)
		{
			if(x[i] != y[i] && x[i] != '?' && y[i] != '?')
			{
				flag="No";
				break;
			}
		}
		cout<<flag<<endl;
	}
	return 0;
}
