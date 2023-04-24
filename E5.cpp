//E5. Hot or Cold

#include <iostream>
#include <math.h>

using namespace std;
//variáveis globais relevantes
int lastGuess;
int correctGuess = 59;
int guesses = 0;

string Guess(int x)
{
    guesses ++;
    if(x == correctGuess)
        return "Exact!";
    else if (abs(correctGuess - x) < abs(correctGuess - lastGuess))
    {
        lastGuess = x;
        return "Hot";
    }
    lastGuess = x;
    return "Cold";
}


int bGuesser(int N)
{
    int first = 1;
    int last = N;
    int mid;
    string test;
    while(first != last)
    {
        
        mid = (last+first)/2;
        for(int i = 0; i < 2; i ++)
        {
            test = Guess(mid+i);
            if(test == "Exact!")
                return mid + i;
        }
        cout<<"Testei o "<< mid << " e deu '" << test << "'. Estou indo para a ";

        if(test == "Hot")
        {
            cout<< "direita.\n";
            first = mid+1;
        }
        else
        {
            cout<< "esquerda.\n";
            last = mid;
        }
            
    }

    return N; //Caso o número correto seja maior que N ou menor que 1, o que nunca deve acontecer...
}

int main() {//Somente para testes
    
    int N = 5000;
    int x = bGuesser(N);
    cout<<"Foi buscado um número entre 1 e "<< N <<".\n";
    cout<<"Terminei de buscar e o número secreto deve ser o "<< x <<".\n";
    cout<<"Número de tentativas: "<< guesses <<".\n";
    return 0;
}