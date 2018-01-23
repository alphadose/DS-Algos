#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	int y,p,d;
	map<int, int> map;
	cin>>y;
	for(int i=y+1;i<=9012;i++)
	{
		p=i;
		while(p>0)
		{
			d=p%10;
			map[d]=1;
			p/=10;
		}
		if(map.size()==4)
		{
			cout<<i;
			break;
		}
		map.clear();
	}

	return 0;
}
