#include <iostream>
#include "array.h"
using namespace std;

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {1,2};
    char brr[5];
    cout << "Size of int array " << sizeof(arr) << endl;
    cout << "Size of char array " << sizeof(brr) << endl;

    cout << "Initial array "<< endl;
    printarray(arr, 5);
    
    return 0;
}