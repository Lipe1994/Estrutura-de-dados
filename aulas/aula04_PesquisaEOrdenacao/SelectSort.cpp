/*
	SelectSort
*/
#include <iostream>

using namespace std;

void imprimeVetor(int a[], int tam );
void selectionSort(int a[], int tam );

int main()
{
	
	int vet[5] = {10, 20, 3, 1, 5};
	imprimeVetor(vet, 5);
	
	cout<<"\n\n";
	selectionSort(vet, 5);
	imprimeVetor(vet, 5);
	

    return (0);
}

void selectionSort(int vet[], int tam )
{
	int indexMin, x, y;
	
	for(x =0; x < tam -1; x++ )
	{
		indexMin=x;
		for(y = x+1; y < tam; y++ )
		{
			if(vet[y] < vet[indexMin])
			{
				indexMin=y;
			}
		}
			
		if(indexMin != x)
		{
				int temp = vet[indexMin];
				vet[indexMin] = vet[x];
				vet[x] = temp;
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
