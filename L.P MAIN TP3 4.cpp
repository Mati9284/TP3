#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	cout << "Este programa indica 25 serie de términos, 11, 22 etc..." << endl;
	for (int i=11;i<=275;i=i+11)
	{
		cout << i << endl;
	}
}
