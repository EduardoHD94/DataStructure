#include <iostream>
using namespace std;

bool isPalindrome(string);
int main(){
	string palindromo;

	cout << isPalindrome("anitalavalatina")<< endl;
	cout << isPalindrome("oso")<<endl;
	cout << isPalindrome("osa")<<endl;
	cout << isPalindrome("jasso")<<endl;
}

bool isPalindrome(string word){

	/*	if (word == string(word.rbegin(),word.rend())) {
   		return true;
	}
	else
		return false;
	*/

	for(int i = 0; i<word.length()/2; i++)
	{
		if(word[i] !=  word[word.length()-1-i])
			return false;
	}
		return true;
}
