#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float i=0;
	int par=0, inpar=0, num1=0;
	cout << "Este programa indica, con la carga de 10 valores, si son pares o impares" << endl;
	while (i<=10)
	{
		cout << "Ingrese número" << endl;
		cin >> num1;
		i=i+1;
		if (num1%2==0)
		{
			par=num1;
		}
		if (num1%2==1)
		{
			inpar=num1;
		}
		if (i>=10)
		{
			cout << "Pares: " << par << endl;
			cout << "Inpares: " << inpar << endl;
		}
	}	
}
