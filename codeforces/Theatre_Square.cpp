#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long double n,m,a;
	cin>>n>>m>>a;

	cout<<(long long int)(ceil(n/a)*ceil(m/a));
	return 0;
}
