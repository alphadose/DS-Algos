#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	map<string, int> grade={
							 {"111",10},
							 {"110",9},
							 {"011",8},
							 {"101",7},
							 {"001",6},
							 {"100",6},
							 {"010",6},
							 {"000",5}
							};
	string s;
	int t;
	double h,c,ten;
	cin>>t;
	while(t--)
	{
		cin>>h>>c>>ten;
		s="";
		if(h>50)
			s+="1";
		else
			s+="0";
		if(c<0.7)
			s+="1";
		else
			s+="0";
		if(ten>5600)
			s+="1";
		else
			s+="0";
		cout<<grade[s]<<endl;
	}
	return 0;
}
