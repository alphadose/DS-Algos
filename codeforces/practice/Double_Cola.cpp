#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string a[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
	long long int n,p,x=5;
	cin>>n;
	for(int p=0;p<n;p++)
	{
		if(p!=0)
			x=x*2;
		if(x>n) break;
	}
	cout<<a[(n*5)/x];
	cout<<endl<<(n*5)/x;
	return 0;
}
