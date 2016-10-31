#include <iostream>
#include <sstream>
using namespace std;

bool validarIP(string);
int main()
{
	string input = "111.168.1.232.23";
	
	cout << validarIP(input) << endl;

	


}

bool validarIP(string ip)
{
	istringstream ss(ip);
	string token;


	int contador = 0;

	while(getline(ss, token, '.'))
	{

			int valor;
			stringstream convert(token);
			convert >> valor;
			if(valor > 255 || valor < 0)
				return false;
			
		contador++;
	}


	if(contador == 4)
		return true;
	else
		return false;
}
