#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,r,count=0;
	double a[3][3],dist;
	cin>>t;
	while(t--)
	{
		cin>>r;
		count=0;
		for(int i=0;i<3;i++)
			cin>>a[i][0]>>a[i][1];

		for(int i=0;i<3;i++)
		{	
			if(i!=2)
				dist = sqrt(pow(abs(a[i][0]-a[i+1][0]),2)+pow(abs(a[i][1]-a[i+1][1]),2));
			else
				dist = sqrt(pow(abs(a[i][0]-a[0][0]),2)+pow(abs(a[i][1]-a[0][1]),2));

			if(dist<=r)
				count++;
		}
		if(count>=2)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

	}
	return 0;
}
