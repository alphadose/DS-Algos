#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,q,p;
	double final;
	cin>>t;
	while(t--)
	{
		cin>>q>>p;
		if(q>1000)
			final=0.9*q*p;
		else
			final=q*p;
		cout<<fixed<<setprecision(6)<<final<<endl;
	}
	return 0;
}
