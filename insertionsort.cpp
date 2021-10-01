#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
    int k,j;

    for(int i=1;i<n;i++)
    {
        k = arr[i];
        j = i-1;

        while (j>=0 && arr[j]>k)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=k;
    }
}

void printArr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }   
}

int main()
{
    int arr[] = {2,56,14,87,1,91,63};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
    printArr(arr,n);
}