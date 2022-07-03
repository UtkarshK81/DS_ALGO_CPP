#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *firstArray = new int[len1];
    int *secondArray = new int[len2];

    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        firstArray[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        secondArray[i] = arr[mainArrayIndex++];
    }

    // Now merge 2 sorted arrays
    int i = 0, j = 0;
    mainArrayIndex = start;
    while (i < len1 && j < len2)
    {
        if (firstArray[i] < secondArray[j])
        {
            arr[mainArrayIndex++] = firstArray[i++];
        }
        else
        {
            arr[mainArrayIndex++] = secondArray[j++];
        }
    }
    while (i < len1)
    {
        arr[mainArrayIndex++] = firstArray[i++];
    }
    while (j < len2)
    {
        arr[mainArrayIndex++] = secondArray[j++];
    }
    delete[] firstArray;
    delete[] secondArray;
}

void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);   // sorting left part
    mergeSort(arr, mid + 1, end); // sorting right part

    merge(arr, start, end); // merge both parts
}

int main()
{

    int arr[6] = {23, 21, 44, 0, -1, 29};
    mergeSort(arr, 0, 6);
    for (int element : arr)
    {
        cout << element << " ";
    }
    return 0;
}