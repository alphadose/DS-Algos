#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<max(a,b)<<" "<<a+b<<endl;
	}
	return 0;
}
