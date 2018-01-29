#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if(!(n&1))
		cout<<4<<" "<<n-4;
	else
		cout<<9<<" "<<n-9;
	return 0;
}
