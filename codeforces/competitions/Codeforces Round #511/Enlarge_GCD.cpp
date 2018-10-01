#include<bits/stdc++.h>
using namespace std;

int SieveOfEratosthenes(vector<int> &a, int k)
{
    int n = 5 * pow(10,7);
    vector<bool> prime;
    prime.resize(n);
    prime[0] = true;
    prime[1] = true;
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    
    int count = 0;
    for(int i=0;i<k;i++) {
        if(prime[a[i]])
            count++;
    }

    return count;
}

int main() {
    int n;
    cin>>n;

    vector<int> a;
    a.resize(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    int count = SieveOfEratosthenes(a, n);
    if(count == n) cout<<-1;
    else if(count!=0) cout<<count;
    else {
        
    }

}