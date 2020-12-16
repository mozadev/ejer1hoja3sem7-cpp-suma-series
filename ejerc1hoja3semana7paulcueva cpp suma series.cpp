#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
using namespace System;
void LeerDatos(int n, float a, float x, float y)
{
	do{
		cout << "Ingrese n: ";
		cin >> n;
	} while (n > 30 || n < 1);
	cout << "Ingrese valor a: ";
	cin >> a;
	cout << "Ingrese valor x: ";
	cin >> x;
	cout << "Ingrese valor y: ";
	cin >> y;
}
int main()
{
	int n;
	int numerador = 3;
	int denominador = 2;
	float a, x, y, suma;
	LeerDatos(n, a, x, y);
	suma = -1 * numerador*x;
	numerador += 3;
	for (int i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
			suma = suma + pow(-1, i)*(numerador / denominador)*(y / pow(a, i - 1));
		else
			suma = suma + pow(-1, i)*(numerador / denominador)*(x / pow(a, i - 1));

		numerador += 3;
		denominador *= 2;
	}
	cout << "La suma es: " << suma;
	getch();
	return 0;
}