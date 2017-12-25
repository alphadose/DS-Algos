#include <iostream>
using namespace std;

long computeXOR(const int n)
{   
    switch(n & 3) 
    {
    case 0: return n;     
    case 1: return 1;       
    case 2: return n + 1;     
    case 3: return 0;       
    }
}

int main(int argc, char const *argv[])
{
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>x>>y;
		cout<<computeXOR(n)<<endl;
	}
	return 0;
}
