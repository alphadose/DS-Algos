#include <iostream>
using namespace std;

int index(int a[], int num , int size)
{
	for(int i=0;i<size;i++)
		if(a[i] == num)
			return i+1;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n!=0)
	{
		string flag="ambiguous";
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++)
		{
			if(a[i] != index(a,i+1,n))
			{
				flag = "not ambiguous";
				break;
			}
		}
		cout<<flag<<endl;
		cin>>n;
	}
}
