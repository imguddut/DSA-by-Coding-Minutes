#include <iostream>
using namespace std;

void reversearray(int *arr, int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

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
    int arr[] = {14, 16, 18, 44, 58, 11};
    int n = sizeof(arr) / sizeof(int);
    cout << "Initial Array "<< endl;
    printarray(arr,n);
    reversearray(arr, n);
    cout << "After reverse Array "<< endl;
    printarray(arr,n);
    return 0;
}