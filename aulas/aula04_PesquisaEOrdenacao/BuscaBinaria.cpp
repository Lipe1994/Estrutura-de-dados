/*
	SelectSort
*/
#include <iostream>

using namespace std;

int buscaBinaria(int vet[], int tam, int itemBusca );

int main()
{
	
	int vet[10] = {1,2,3,4,5,6,7,8,9,10};
	
	buscaBinaria(vet, 10, 3);


    return (0);
}

int buscaBinaria(int vet[], int tam, int itemBusca)
{
	int inicio = 0;
	int fim = tam;
	int meio = (inicio+fim)/2;
	
	int numeroDeBuscas = 0;
	
	while(itemBusca != vet[meio] && inicio < fim)
	{
		numeroDeBuscas++;
		
		if(itemBusca > vet[meio])
		{
			inicio = meio+1;
			meio = (inicio+fim)/2;
		}else
		{
			fim = meio;
			meio = (inicio+fim)/2;
		}
	}
	
	if(itemBusca == vet[meio])
	{
		cout<<"Encontrei com "<<numeroDeBuscas<<" buscas";
	}else
	{
		cout<<"Não encontrei!";
	}				
}

