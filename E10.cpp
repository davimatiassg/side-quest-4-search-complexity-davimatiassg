//E10. Find the jump in the array.

#include <iostream>

using namespace std;
//variáveis globais relevantes
int * bsearch_jump( int * first, int * last)
{
    int *mid;
    int *Truelast = last;

    while(first != last)
    {
        mid = first + (last-first)/2;
        if((*mid) - *(mid-1) == 1 && *(mid+1) - (*mid) > 1)
            return mid;
            
        if((*mid) - (*first) == mid - first)
        {
            first = mid+1;
        }
        else
        {
            last = mid;
        }    
    }

    return Truelast;
}

int main() {//Somente para testes
    
    int arr[10] =  { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int *x = bsearch_jump(arr, arr+10);
    cout<<"O first é "<< arr <<endl;
    cout<<"O last é "<< arr+10 <<endl;
    cout<<"A função retornou "<< x <<", onde está o elemento "<< *x <<endl;

    return 0;
}