#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i=1; i<n; i++)
        result = gcd(arr[i], result);
 
    return result;
}

int main(int argc, char const *argv[])
{
	int t,n;
	int mini;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int flag=0;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		mini = findGCD(a,n);
		for(int i=0;i<n;i++)
		{
			if(double(a[i])/double(mini) == int(a[i]/mini))
			{
				flag=1;
				b[i]= a[i]/mini;
			}
			else
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			for(int i=0;i<n;i++)
				cout<<int(b[i])<<" ";
		else
			for(int i=0;i<n;i++)
				cout<<int(a[i])<<" ";

		cout<<endl;
	}
	return 0;
}
