#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string s1,s2,res="";
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++)
		res+=(int(s1[i]-'0')^int(s2[i]-'0')) + '0';
	cout<<res;
	return 0;
}
