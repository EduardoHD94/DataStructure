#include <iostream>
using namespace std;

int factorial(int);
int main()
{
	cout << factorial(5) << endl;
	cout << factorial(0) << endl;
	cout << factorial(-12) << endl;
}
int factorial(int n)
{
	if( n == 0 || n == 1)
		return 1;
	else if (n> 1)
		return n * factorial(n-1);
	else
		return -1;
}
