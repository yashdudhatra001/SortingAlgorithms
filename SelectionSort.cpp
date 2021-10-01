#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}


//Selection Sort
int *SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                swap(arr[i], arr[j]);
            }
        }
    }
    return arr;
}

int main()
{
    int arr[] = {6, 23, 323, 32, 2, 532, 27};
    int n = sizeof(arr) / sizeof(int);
    int *b = SelectionSort(arr, n);
    cout << "Result of Selection Sort : " << endl;
    print(b, n);
   
}
