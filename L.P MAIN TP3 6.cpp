#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float suma=0, i=0;
	cout << "Este programa indica 100 términos pares que se suman" << endl;
	while  (i<=99)
	{
		i=i+2;
		cout << i << endl;
		suma=suma+i;
	}
	cout << "Suma de todos estos términos: "<< suma << endl;
}
