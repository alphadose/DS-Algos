#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<n%(n/(n/k+1)+1)<<endl;
	}
	return 0;
}
