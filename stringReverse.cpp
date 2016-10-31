#include <iostream>
using namespace std;

string reverseString(string);

int main(){


	cout << reverseString("pepsi") << endl;
}

string reverseString(string s)
{	
	char tmp;
	for(int i=0; i < s.length()/2; i++)
	{
		tmp = s[i];
		s[i] = s[s.length()-1-i];
		s[s.length()-1-i] = tmp;	
	}

	return s;
}

