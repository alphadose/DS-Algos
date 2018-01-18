#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,x1,x2,y1,y2;
	cin>>t;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2;
		if(y1==y2)
		{
			if(x1-x2 > 0)
				cout<<"left"<<endl;
			else if(x1-x2 < 0)
				cout<<"right"<<endl;
			else
				cout<<"sad"<<endl;
			continue;
		}
		else if(x1==x2)
		{
			if(y1-y2 > 0)
				cout<<"down"<<endl;
			else if(y1-y2 < 0)
				cout<<"up"<<endl;
			continue;
		}
		cout<<"sad"<<endl;
	}
	return 0;
}
