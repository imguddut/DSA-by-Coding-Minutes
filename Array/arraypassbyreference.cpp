#include <iostream>
using namespace std;

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Inside function size of array is " << sizeof(arr) << endl;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout << "inside main Size of array is " << sizeof(arr) << endl;
    printarray(arr, n);
    return 0;
}