/*
	Fun��o que recebe valor do sal�rio e logo ap�s adiciona um reajuste percentual
*/
#include <iostream>

using namespace std;


int main()
{
	float salario, reajuste, salarioReajustado;
	
	cout << "Digite o valor do sal�rio: ";
	
	cin>>salario;
	
	cout << "Digite o valor do reajuste percentual: ";
	
	cin>>reajuste;
	
	salarioReajustado = (salario + (reajuste*salario/100) );
	
	cout << "O sal�rio � igual a: "<<salarioReajustado;
	

    return (0);
}

