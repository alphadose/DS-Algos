#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,p,t;
	cin>>n;
	set <int, greater <int> > a;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>t;
		a.insert(t);
	}
	cin>>p;        
	for(int i=0;i<p;i++)
	{
		cin>>t;
		a.insert(t);
	}
	if(a.size()==n)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
	return 0;
}
