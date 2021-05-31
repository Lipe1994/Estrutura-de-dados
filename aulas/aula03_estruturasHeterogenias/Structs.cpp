/*
	Estruturas heterogenias
*/
#include <iostream>

using namespace std;

struct Coordenada{
	string name;
	int x;
	int y;
	int z;	
};

void imprimirCoordenadas(Coordenada c);

int main()
{

	Coordenada c[2];
	
	c[0].name = "Primeira coordenada";
	c[0].x = 1;
	c[0].y = 2;
	c[0].z = 3;
	
	c[1].name = "Segunda coordenada";
	c[1].x = 3;
	c[1].y = 4;
	c[1].z = 5;
	
	for(int i =0; i< 2; i++)
	{
		imprimirCoordenadas(c[i]);
	}


    return (0);
}


void imprimirCoordenadas(Coordenada c)
{
	cout<<"Coordenada "<<c.name<<"\n";
	cout<<"Coordenada X "<<c.x<<"\n";
	cout<<"Coordenada Y "<<c.y<<"\n";
	cout<<"Coordenada Z "<<c.z<<"\n";
	
	cout<<"\n";
}

