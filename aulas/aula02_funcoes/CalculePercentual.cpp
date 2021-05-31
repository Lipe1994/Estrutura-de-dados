#include <iostream>

using namespace std;

int main()
{
	float valor, percentual, reajustado;
	
	cout<<"\n Digite o valor que devera ser reajustado R$";
	cin>>valor;
	cout<<"Digite o valor do percentual de reajuste de 0 a 100 \n";
	cin>>percentual;
	reajustado=valor + (valor * percentual/100);
      
    cout<<"\n Valor reajustado e "<<reajustado;
    return (0);
}

