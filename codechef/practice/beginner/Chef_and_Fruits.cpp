#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,m,k,res;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		res=max(n,m)-min(n,m)-k;
		if(res<0)
			res=0;
		cout<<res<<endl;
	}
	return 0;
}
