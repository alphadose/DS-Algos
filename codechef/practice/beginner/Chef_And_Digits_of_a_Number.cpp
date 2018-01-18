#include <iostream>
using namespace std;

int check_frequency(char checkCharacter,string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
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
	int t;
	string s,answer;
	cin>>t;
	while(t--)
	{
		cin>>s;
		answer = (check_frequency('1',s)-s.length()==-1 || check_frequency('0',s)-s.length()==-1)?"Yes":"No";
		cout<<answer<<endl;
	}
	return 0;
}
