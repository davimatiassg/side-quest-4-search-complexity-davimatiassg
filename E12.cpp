//E12. Sum of two.

#include <iostream>
#include <tuple>

using namespace std;
//variáveis globais relevantes
tuple<int *, int *, int *> sumFinder(int A[] , int na, int B[], int nb) // Optei por separar os tamanhos de A e B.
{
    for(int i = 0; i < nb; i ++)
    {
        for(int j = 0; j < na; j ++)
        {
            for(int k = j; k < na; k++)
            {
                if(A[j] + A[k] == B[i])
                {
                    return make_tuple(A+j, A+k, B+i);
                }
            }
        }
    }
    return make_tuple(A + na, A + na, B + nb);
}

int main() {//Somente para testes
    
    int A[10] =  { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int B[10] =  { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    tuple<int *, int *, int *> X = sumFinder(A, 10, B, 10);
    cout<<"A função retornou uma tupla onde estão os elementos "<< *get<0>(X) << ", "<< *get<1>(X) << ", "<< *get<2>(X) <<endl;

    return 0;
}