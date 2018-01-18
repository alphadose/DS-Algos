#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int m,n,count=0,a,b;
	cin>>m>>n;
	a = max(m,n);
	b = min(m,n);
	if(a%2!=0 && a>=2)
		count+=a/2*b+b/2;
	else if(a%2==0 && a>=2)
		count+=a/2*b;
	else
		count=0;

	cout<<count;

	return 0;
}
