#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string s,s1,s2;
	cin>>s;
	s1="0000000";
	s2="1111111";

	if (s.find(s2) != string::npos || s.find(s1) != string::npos)
    	cout << "YES";
    else
    	cout<<"NO";
	
	return 0;
}
