#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float num1=0, i=0,inicio=0;
	cout << "Este programa indica" << endl;
	cout << "Ingrese el número a dividir por 2" << endl;
	cin >> num1;
	inicio=num1;
	while (num1>=0.01)
	{
		num1=num1/2;
		if (num1<=0.01)
		{
		cout << "Número inicial: " << inicio << endl;
		cout << "Número final " << num1 << endl;
		}
	}
	
}
