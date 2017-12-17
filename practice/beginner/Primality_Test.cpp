#include <iostream>
using namespace std;

string prime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
		if(n%i == 0)
			count++;

	if(count == 2)
		return "yes";
	else
		return "no";		
}

int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<prime(n)<<endl;
	}
	return 0;
}
