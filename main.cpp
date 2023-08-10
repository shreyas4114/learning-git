// This program reverses the array 

#include<iostream>
using namespace std;

void reverse(int arr[], int n)     // reverse the array
{
    int start = 0;
    int end = n-1;
    while (start <= end)        // for odd number array at centre  start = end 
                                // for even number array start < end
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }  
}

void printarr(int arr[], int n)       // printf the array
{
    for (int i = 0; i <= n-1; i++)
    {
        cout << arr[i] << " ";
    }    
    cout << endl;
}
                             
int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[6] = {12,33,21,5,41,57};

    reverse(arr1, 5);
    reverse(arr2, 6);

    printarr(arr1, 5);
    printarr(arr2, 6);

    return 0;
}

