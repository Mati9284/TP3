#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float num1=0, i=0, total=0, max=0, min=999999999999999999999999999999999999999999999999999999999999999999999999999999999, prom=0;
	cout << "Este programa indica, con la carga de 10 valores, su suma, el valor máx y el mínimo y su promedio" << endl;
	cout << "Ingrese primer número" << endl;
	while (i<=10)
	{
		cin >> num1;
		total=num1+total;
		i=i+1;
		if (max<num1)
		{
			max=num1;
		}
		if (min>num1)
		{
			min=num1;
		}
		if (i>=10)
		{
		prom=total/i;
		cout << "Promedio: " <<  prom << endl; cout << "Total: " << total << endl; cout << "Numero máximo: " << max << endl;
		cout << "Número mínimo: " << min << endl;
		}
	}	
}
