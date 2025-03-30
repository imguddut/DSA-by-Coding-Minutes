#include <iostream>
using namespace std;

 int linearsearch(int *arr, int n, int key)
 {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
    
 }
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int idx = linearsearch(arr, n , 5);
    if (idx != -1)
    {
        cout << "Present at index " << idx << endl;
    }
    else
    cout << "Not found";
    
    return 0;
}