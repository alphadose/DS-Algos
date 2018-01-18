#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,m,x,y,cov,left,right,count=0;
	cin>>t;
	while(t--)
	{
		cin>>m>>x>>y;
		count=0;
		int a[m];
		for(int i=0;i<m;i++)
			cin>>a[i];
		sort(a,a+m);
		cov = x*y;
		left = a[0]-cov;
		left = (left<=1)?0:left-1;
		right = a[m-1]+cov;
		right = (right>=100)?0:100-right;
		count=count+left+right;
		for(int i=0;i<m-1;i++)
		{
			if(a[i+1]-a[i]>2*cov)
				count = count + a[i+1]-a[i] - 2*cov-1;
		}
		cout<<count<<endl;
	}
	return 0;
}
