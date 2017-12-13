#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{	
	int x;
	double y;
	cin>>x>>y;
	if(x+0.5>y || x%5!=0)
	{
		cout<<setprecision(2)<<fixed<<y;
		return 0;
	}

	double result = y-x-0.50;
	cout<<setprecision(2)<<fixed<<result;
}