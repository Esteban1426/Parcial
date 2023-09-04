#include <iostream>

using namespace std;

int main()
{
	int opcion;
	do
	{	
		int numeros[]= {1,20,21,22,23,2,3,4,5,6,7,24,25,26,27,28,29,30,8,9,10,11,12,13,14,15,16,17,18,19};
		int i,j,aux;

		for(i=0; i<30;i++)
		{
			for(j=0;j < 30;j++)
			{
				if (numeros[j] > numeros [j+1])
				{
					aux = numeros[j];
					numeros[j]= numeros[j+1];
					numeros[j+1] = aux;
				}
			}
		}
		cout << "Lista ordenada: "<<endl;
		
		for(i=0;i<30;i++)
		{
			cout <<numeros[i]<<" "<<endl;
		}
		cout <<"Deseas repetir el programa 1-> SI o 2-> NO "<<endl;
		cin >> opcion;
		
	}while(opcion != 2);
	return 0;
};
