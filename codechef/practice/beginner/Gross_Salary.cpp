#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,salary;
	double total;
	cin>>t;
	while(t--)
	{
		cin>>salary;
		if(salary<1500)
		{
			total=salary*2;
		}
		else
		{
			total=1.98*salary+500.00;
		}
		cout<<fixed<<setprecision(4)<<total<<endl;
	}
	return 0;
}
