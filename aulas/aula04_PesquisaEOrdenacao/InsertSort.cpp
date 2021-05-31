/*
	SelectSort
*/
#include <iostream>

using namespace std;

void imprimeVetor(int a[], int tam );
void insertionSort(int a[], int tam );

int main()
{
	
	int vet[5] = {10, 20, 3, 1, 5};
	imprimeVetor(vet, 5);
	
	cout<<"\n\n";
	insertionSort(vet, 5);
	imprimeVetor(vet, 5);
	

    return (0);
}

void insertionSort(int vet[], int tam )
{
	
	for(int i =0; i < tam ; i++)
	{
		int posInsert = i;
		int valorParaInserir = vet[i];
		
		while(posInsert > 0 &&  vet[posInsert-1] > valorParaInserir)
		{
			vet[posInsert] = vet[posInsert-1];
			posInsert--;		
		}
		
		if(posInsert != i)
		{
			vet[posInsert] = valorParaInserir;
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
