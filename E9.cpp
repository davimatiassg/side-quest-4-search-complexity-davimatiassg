//E9. Search in a sorted, rotated array

#include <iostream>

using namespace std;
//variáveis globais relevantes
int * bsearch_rot( int * first, int * last, int value )
{
    int *mid;
    int *Truelast = last;

    while(first != last)
    {
        mid = first + (last-first)/2;

        if(*mid == value)
            return mid;
        if((*mid < value && *mid >= *first) || (*mid > value && *mid < *first))
            first = mid+1;
        else
            last = mid;
    }

    return Truelast;
}

int main() {//Somente para testes
    
    int arr[10] =  { 25, 36, 37, 50, 1, 7, 12, 13, 14, 15};
    int *x = bsearch_rot(arr, arr+10, 36);
    cout<<"O first é "<< arr <<endl;
    cout<<"O last é "<< arr+10 <<endl;
    cout<<"A função retornou "<< x <<", onde está o elemento "<< *x <<endl;

    return 0;
}