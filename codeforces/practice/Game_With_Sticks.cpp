#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	if(min(n,m)&1)
		cout<<"Akshat";
	else
		cout<<"Malvika";
	return 0;
}
