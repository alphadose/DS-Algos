#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,res,p;
	cin>>n>>m;
	res = n + n/m;
	while((res-n)/m > 0)
	{
		p=res;
		res+= (res-n)/m;
		n=p;
	}
	cout<<res;
	return 0;
}
