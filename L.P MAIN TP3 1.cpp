#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	int a=0, r=0, i=0, nota=0, inicio=0;
	cout << "Este programa indica los aprobados y los desaprobados" << endl;
	cout << "Ingrese nota" << endl;
	while (i<10)
	{
		cin >> nota;
		if (nota>=7)
		{
			a=a+1;
		}
		else
		{
			r=r+1;
		}
		i=i+1;
	}
	cout << "Aprobados:" << a << endl;
	cout << "Desaprobados:" << r << endl;
	cout << "¿Quieres volver a iniciar el programa? 1=si 0=no" << endl;
	cin >> inicio;
	if (inicio=1)
	{
		return main();
	}
}
