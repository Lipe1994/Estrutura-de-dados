/*
	BoobleSorte
*/
#include <iostream>

using namespace std;

void imprimeVetor(int a[], int tam );
void boobleSort(int a[], int tam );

int main()
{
	
	int vet[5] = {10, 20, 3, 1, 5};
	imprimeVetor(vet, 5);
	
	cout<<"\n\n";
	boobleSort(vet, 5);
	imprimeVetor(vet, 5);
	

    return (0);
}

void boobleSort(int vet[], int tam )
{
	for(int i = 1; i<tam; i++)
	{
		for(int j = 0; j<tam-i; j++)
		{
			if(vet[j] > vet[j+1])
			{
				int temp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = temp;
				
			}
			
		}
		
	}					
}

void imprimeVetor(int a[], int tam )
{
	for(int i =0; i<tam; i++)
	{
		cout<<"posicao "<<i<<" :"<< a[i]<<"\n";
	}
}
