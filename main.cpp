#include<iostream>
using namespace std;

void reverse(int arr[], int n)     // reverse the array
{
    int start = 0;
    int end = n-1;
    while (start <= end)        // for odd number array at centre  start = end 
                                // for even number array start < end
    {
        swap(arr[start], arr[end]);f
        start++;
        end--;
    }  
}
