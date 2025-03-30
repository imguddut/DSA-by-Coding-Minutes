#include <iostream>
using namespace std;

int binarysearch(int *arr, int n, int key)
{
    int low = 0;
    int high = n-1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid -1; 
        }
        else
        low = mid+1;
    }
    return -1;
}
int main() {
    int arr[] = {14,25,16, 18, 44, 58, 11};
    int n = sizeof(arr)/sizeof(int);
    int idx = binarysearch(arr, n, 52);
    if (idx != -1)
    {
       cout << "Present at Index " << idx << endl;
    }
    else
    cout << "Element Not found in this array" << endl;
    return 0;
}