#include <iostream>
using namespace std;

int fibonacci(int);
int main(){

	cout << fibonacci(10) << endl;
	cout << fibonacci(3) << endl;
	return 0;
}

int fibonacci(int number)
{
	if( number == 0 || number == 1)
		return number;
	else
		return fibonacci(number-2) + fibonacci(number-1);
}
