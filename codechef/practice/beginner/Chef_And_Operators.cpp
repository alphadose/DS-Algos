#include <iostream>
#include <map>
#define sgn(v) ( ( (v) < 0 ) ? -1 : ( (v) > 0 ) )
using namespace std;

int main(int argc, char const *argv[])
{
	int t,a,b;
	map<int, string> sign = {
								{-1,"<"},
								{1,">"},
								{0,"="}
							};
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<sign[sgn(a-b)]<<endl;
	}
	return 0;
}
