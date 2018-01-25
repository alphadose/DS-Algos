#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;
	int arr[]={a+b+c,a*b*c,(a+b)*c,a*(b+c)};
	cout<<*max_element(arr,arr+4);
	return 0;
}
