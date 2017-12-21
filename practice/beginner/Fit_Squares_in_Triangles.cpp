#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,b,x;
	cin>>t;
	while(t--)
	{
		cin>>b;
		if(b%2!=0)
			b-=3;
		else
			b-=2;
		x=b/2;
		x=x*(x+1)/2;
		cout<<x<<endl;
	}
	return 0;
}
