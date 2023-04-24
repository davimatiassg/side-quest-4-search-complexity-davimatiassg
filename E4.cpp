//E4. Binary search with duplicates

#include <iostream>

using namespace std;

int * bsearch_forfirst( int * first, int * last, int value )
{
    int *mid;
    int *Truelast = last;

    while(first != last)
    {
        mid = first + (last-first)/2;

        if(*mid == value)
            last = mid;
            break;
        if(*mid < value)
            first = mid+1;
        else
            last = mid;
    }
    if(*mid == value)
    {
        while(first != last)
        {
            mid = first + (last-first)/2;
            if(*mid < value)
                first = mid+1;
            else
                last = mid;
        }
        return last;
    }

    return Truelast;
}

int main() {//Somente para testes
    
    int arr[10] =  {1, 5, 5, 5, 5, 5, 7, 7, 7, 7};
    int *x = bsearch_forfirst(arr, arr+10, 5);
    cout<<"O first é "<< arr <<endl;
    cout<<"O last é "<< arr+10 <<endl;
    cout<<"A função retornou "<< x <<", onde está o elemento "<< *x <<endl;

    return 0;
}