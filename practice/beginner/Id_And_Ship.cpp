#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	map<string, string> ship = {
							    {"B","BattleShip"},
							    {"C","Cruiser"},
							    {"D","Destroyer"},
							    {"F","Frigate"}
							 };

	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout<<ship[s]<<endl;
	}						 
	return 0;
}
