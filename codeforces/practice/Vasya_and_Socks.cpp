#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	cout<<n+int(n-1)/int(m-1);
	return 0;
}
