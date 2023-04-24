//E1. Local Minimum Array

#include <iostream>

using namespace std;

int* findLocalMin(int arr[], size_t n)
{
	if(n <= 1) // Para arrays de tamanho reduzido
	{
		return arr;
	}

	int *p, *f, *l;
	f = arr;
	l = arr+n;

	if(*f < *(f+1))// Verificando a borda esquerda
	{
		return f;
	}
	if(*(l-1) < *(l-2)) // Verificando a borda direita
	{
		return l-1;
	}

	do 
	{
		p = f + (l-f)/2;
		
		if(*(p + 1) > *p && *(p - 1) > *p) //Achando um minimo local.
		{
			return p;
		}
		else if(*(p - 1) > *(p + 1)) //Indo para direita.
		{
			f = p;
		}
		else //Indo para esquerda.
		{
		    
			l = p;
		}
	}while(f < l-1); //enquanto existir ao menos uma posição entre f e l.
	//cout<<"Não achei nada..."<<endl;
	return arr+n;
} 

int main() {//Somente para testes
    
    int arr[10] =  {5, 5, 4, 6, 7, 7, 7, 10, 12, 13}; //Test array
    int *x = findLocalMin(arr, 10);
    cout<<"O first é "<< arr <<endl;
    cout<<"O last é "<< arr+10 <<endl;
    cout<<"A função retornou "<< x <<", onde está o elemento "<< *x <<endl;

    return 0;
}
