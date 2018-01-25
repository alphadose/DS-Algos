#include <iostream>
using namespace std;

string remove_extra_whitespaces(string input)
{
    int inputIndex = 0;
    string output="";

    while(input[inputIndex] != '\0')
    {
        output += input[inputIndex];

        if(input[inputIndex] == ' ')
        {
            while(input[inputIndex + 1] == ' ')
            {
                // skip over any extra spaces
                inputIndex++;
            }
        }

        inputIndex++;
    }

    // null-terminate output
    output += '\0';
    
    return output;
}

string trim(const string& str,
            const string& whitespace = " \t")
{
    const auto strBegin = str.find_first_not_of(whitespace);
    if (strBegin == string::npos)
        return ""; // no content

    const auto strEnd = str.find_last_not_of(whitespace);
    const auto strRange = strEnd - strBegin + 1;

    return str.substr(strBegin, strRange);
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	string delimiter = "WUB";

	size_t pos = 0;
	string token;
	while ((pos = s.find(delimiter)) != string::npos) {
	    token = token + s.substr(0, pos) + " ";
	    s.erase(0, pos + delimiter.length());
	}
	token = remove_extra_whitespaces(token);
	int n = token.length();
	token.erase(n-2,n-1);
	token.erase(0,1);
	cout << token;

	return 0;
}
