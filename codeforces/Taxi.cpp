#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,sum=0,sum2=0;
	cin>>n;
	int a[n],ctr[4]={0,0,0,0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ctr[a[i]-1]++;
	}
	
	if(ctr[0]>=ctr[2])
	{
		sum2 = ctr[2];
		ctr[0]-= ctr[2];
		if(ctr[0]/2 >= ctr[1]%2)
		{	
			sum2+= ctr[1]%2;
			ctr[0]-= 2*(ctr[1]%2);
		}
		else
		{
			sum2+=ctr[0]/2+ctr[1]%2;
			ctr[0]=0;
			ctr[1]-=ctr[1]%2;
		}
	}
	else
	{
		sum2+= ctr[2]+ctr[1]%2;
		ctr[0]=0;
	}
	if(ctr[0]%4 != 0)
		sum2+=1;

	sum = ctr[3] + ctr[0]/4 + ctr[1]/2 + sum2;
	 
	cout<<sum;

	return 0;
}
