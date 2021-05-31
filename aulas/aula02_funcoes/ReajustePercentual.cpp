/*
	Função que recebe valor do salário e logo após adiciona um reajuste percentual
*/
#include <iostream>

using namespace std;


int main()
{
	float salario, reajuste, salarioReajustado;
	
	cout << "Digite o valor do salário: ";
	
	cin>>salario;
	
	cout << "Digite o valor do reajuste percentual: ";
	
	cin>>reajuste;
	
	salarioReajustado = (salario + (reajuste*salario/100) );
	
	cout << "O salário é igual a: "<<salarioReajustado;
	

    return (0);
}

