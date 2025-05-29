#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float num1;
	cout << "Este programa calcula la quinta potencia" << endl;
	cout << "Ingrese número" << endl;
	cin >> num1;
	num1=num1*num1*num1*num1*num1;
	cout << "elevado a la quinta es igual a:" << num1 << endl;
}
