#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	int total=1,suma=0,i=0,inpar=0;
	cout << "Este programa indica, con 300 valores, los impares y su sumatoria" << endl;
	while (i<300)
	{
		suma=suma+i;
		i=i+2;
		if (i % 2 == 0)
		{
			inpar=inpar+1;
		}
	}
	cout << suma << endl;
	cout << inpar << endl;
}
