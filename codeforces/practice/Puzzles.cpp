#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,mini=1001;
	cin>>n>>m;
	int a[m];
	for(int i=0;i<m;i++)
		cin>>a[i];
	sort(a,a+m);
	for(int i=0;i<=m-n;i++)
		mini=min(mini,a[i+n-1]-a[i]);
	cout<<mini;
	return 0;
}
