#include <iostream>
#include <algorithm>
using namespace std;

int check_frequency(char checkCharacter,string str)
{
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{
	int t,n,freq[3];
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		freq[0]=check_frequency('R',s);
		freq[1]=check_frequency('G',s);
		freq[2]=check_frequency('B',s);
		sort(freq,freq+3);
		cout<<n-freq[2]<<endl;
	}
	return 0;
}
