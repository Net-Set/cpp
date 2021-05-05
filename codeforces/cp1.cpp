#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);

    //reverse convert array that will be function creat
    reverseArray(arr, 0, n);
    reverseArray(arr,0,n);
     // //working formation like view and change coding different side that will be development content//:
    // view and formation tracking 

    cout << "every thing change on array element" << endl;
    //print array
    printArray(arr, n);

    return 0;
} 