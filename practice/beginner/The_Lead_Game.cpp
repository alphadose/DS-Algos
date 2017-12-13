#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,w,l=0,s,t,s1=0,t1=0,diff;
	cin>>n;
	while(n--)
	{
		cin>>s>>t;
		s1+=s;
		t1+=t;
		diff=s1-t1;
		if(abs(diff)>l)
		{
			if(diff>0)
				w=1;
			else
				w=2;
			l=abs(diff);
		}
	}
	cout<<w<<" "<<l;
	return 0;
}
