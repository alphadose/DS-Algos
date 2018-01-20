#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[5][5];
	int x,y;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==1)
			{
				x=i;
				y=j;
			}
		}
	cout<<abs(x-2)+abs(y-2);
	return 0;
}
