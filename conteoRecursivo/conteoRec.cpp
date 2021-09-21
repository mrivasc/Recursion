#include <iostream>
using namespace std;

/*Elabore una función que, dado un número entero que se obtiene desde teclado, realice
un conteo como el siguiente:
Suponiendo que el valor ingresado es 3:
1
2
3
2
1*/

int recCount(int n, int i);

int main()
{
	int n = 0, i = 1;

	cout << "Ingrese un numero entero: ";
	cin >> n;

	recCount(n, i);
}

int recCount(int n, int i)
{
	while(i<n){
	cout << i << endl;
	i++;
	}
	
	if (n == 0)
		return n;
	else
	{
		cout << n << endl;
		recCount(n - 1, i);
	}
}