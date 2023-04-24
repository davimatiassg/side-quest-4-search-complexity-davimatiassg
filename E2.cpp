//E2. Local Minimum Matrix

#include "E1.cpp" //Usarei a função do exercício 1.
#include <iostream>
#include <string>

template <int n>
int* findLocalMin(int arr[][n])
{
	for(int i = 0; i < n; i ++)
	{
		int* lmin = findLocalMin(arr[i], n);
		int p = lmin - arr[i];
		if(lmin != arr[i] + n) //A array tem um minimo local?
		{
			bool req = true;//Vamos ver se isso cumpre os requisitos:
			if(i > 0){	//Se não está no canto esquerdo
				if(*lmin >= *(arr[i-1]+p))	//E tem um número à esquerda que é menor...
				{
					req = false;		//Então não cumpre os requisitos.
				}
			}
			//e...
			if(i < n){		//Se não está no canto direito...
				if(*lmin >= *(arr[i+1]+p)) //E tem um número à direita que é menor...
				{
					req = false;		//Então não cumpre os requisitos.
				}
			}
			if(req) 	//SE Cumpriu os requisitos:
			{
				return lmin;
			}
		}
	}
	return arr[n-1] + n;
}

int main() {//Somente para testes
    
    int arr[5][5] = 
    {
    	{5, 5, 4, 6, 7},
    	{4, 3, 2, 5, 6},
    	{4, 1, 3, 2, 5},
    	{5, 5, 3, 5, 5},
    	{3, 5, 1, 2, 4}
    }; //Test array

    int *x = findLocalMin<5>(arr);
    cout<<"O first é "<< arr <<endl;
    cout<<"O last é "<< *(arr+4)+5 <<endl;
    cout<<"A função retornou "<< x <<", onde está o elemento "<< *x <<endl;

    return 0;
}