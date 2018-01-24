#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b, a%b);
}
 
int lcm(int arr[], int n)
{
    int ans = arr[0];
 
    for (int i=1; i<n; i++)
        ans = ( ((arr[i]*ans)) /
                (gcd(arr[i], ans)) );
 
    return ans;
}

int main(int argc, char const *argv[])
{
	int k,l,m,n,d;
	cin.tie(NULL);
	cin>>k>>l>>m>>n>>d;
	int a[][4] = {{k,l,1,1},{k,m,1,1},{k,n,1,1},{l,m,1,1},{l,n,1,1},{m,n,1,1},
				 {k,l,m,1},{k,l,n,1},{k,m,n,1},{l,m,n,1},{k,l,m,n}};
	int res= d/k + d/l + d/m + d/n - d/lcm(a[0],2) - d/lcm(a[1],2) - d/lcm(a[2],2) - d/lcm(a[3],2)
		 - d/lcm(a[4],2) - d/lcm(a[5],2) + d/lcm(a[6],3) + d/lcm(a[7],3) + d/lcm(a[8],3)
		 + d/lcm(a[9],3) - d/lcm(a[10],4);	
	cout<<res;
	return 0;
}
