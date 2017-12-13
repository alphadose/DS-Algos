#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long int n,k,t,c=0;
	scanf("%ld %ld",&n,&k);
	while(n--)
	{
		scanf("%ld",&t);
		if(t%k==0)
			c++;
	}
	printf("%ld",c);

}