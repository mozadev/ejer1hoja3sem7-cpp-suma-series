#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int ingresen()
{
	int n; cout << "ingrese n: "; cin >> n;
	while (n <= 0 || n > 30)
	{
		cout << "ingrese n: "; cin >> n;
	}
	return n;
}

float ingresedatoa()
{
	float a; cout << "ingrese a: "; cin >> a;
	while (a <= 0 || a > 6)
	{
		cout << "ingrese a: "; cin >> a;
	}
	return a;
}
float ingresedatox()
{
	float x; cout << "ingrese x: "; cin >> x;
	while (x <= 0 || x > 6)
	{
		cout << "ingrese x: "; cin >> x;
	}
	return x;
}

float ingresedatoy()
{
	float y; cout << "ingrese y: "; cin >> y;
	while (y <= 0 || y > 6)
	{
		cout << "ingrese y: "; cin >> y;
	}
	return y;
}




float sumaserie(int n, float a, float x, float y)
{
	
	float suma = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			suma = suma + (3 * i*y) / (pow(2, i - 1)*pow(a, i - 1));
			
		else
			suma = suma - (3 * i*x) / (pow(2, i - 1)*pow(a, i - 1));
	}
	return suma;

}
int main()
{
	int n = ingresen();
	float a = ingresedatoa();
	float x = ingresedatox();
	float y = ingresedatoy();
	
	float suma = sumaserie(n,a , x, y);
	cout << "la sumatoria es: " << suma << endl;
	_getch();
}