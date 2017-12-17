#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,c,count;
	int notes[6]={1,2,5,10,50,100};
	cin>>t;
	while(t--)
	{	
		c=5;
		count=0;
		cin>>n;
		while(n>0)
		{
			if(n>=notes[c])
			{
				count++;
				n-=notes[c];
			}
			else
			{
				c--;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
