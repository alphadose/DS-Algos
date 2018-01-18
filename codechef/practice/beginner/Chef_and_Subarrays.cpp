#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;
    int count = 0;
    long long int sum ,product;
    long long int a[50];
    cin>>t;
    while(t--)
    {
    	count=0;
    	cin>>n;
    	
    	for(int i=0;i<n;i++)
    		cin>>a[i];

	    for(int i = 0;i<n;i++)
	    {
	        sum = 0, product = 1;

	        for(int j = i;j>=0;j--)
	        {
	            sum+= a[j];
	            product*= a[j];

	            if(sum == product)
	                count++;
			}
	            
	    }

    cout<<count<<endl;
 }

	return 0;
}
