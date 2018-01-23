#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,x,y,z;
	int a[]={0,0,0};
	cin>>n;
	while(n--)
	{
		cin>>x>>y>>z;
		a[0]+=x;
		a[1]+=y;
		a[2]+=z;
	}
	if(a[0]==0 && a[1]==0 && a[2]==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
