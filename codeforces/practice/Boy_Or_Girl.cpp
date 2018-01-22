#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	string ans[]={"CHAT WITH HER!","IGNORE HIM!"};
	map<char, int> map;
	for(int i=0;i<s.length();i++)
		map[s[i]]=1;
	cout<<ans[map.size()%2];
	return 0;
}
