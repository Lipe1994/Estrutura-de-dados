/*
	Troca valor de duas vari�veis por refer�ncia
*/
#include <iostream>

using namespace std;

void trocaValor(int& a, int& b);

int main()
{
	int a, b;
	
	a = 5;
	b = 10;
	
	cout << "Antes da fun��o a="<<a<<" b="<<b;
	
	trocaValor(a, b);
	
	cout << "Depois da fun��o a="<<a<<" b="<<b;
	

    return (0);
}

void trocaValor(int& a, int& b)
{
	a++;
	b++;
}

