#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int k,n,w;
	cin>>k>>n>>w;
	int ans= w*(w+1)/2 *k - n;
	ans = (ans<0)?0:ans;
	cout<<ans;
	return 0;
}
