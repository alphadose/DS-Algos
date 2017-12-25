#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long int t,n;
	long double result;
	cin>>t;
	while(t--)
	{
		cin>>n;
		result = (-1+sqrt(1+8*n))/2;
		cout<<int(result)<<endl; 
	}
	return 0;
}
