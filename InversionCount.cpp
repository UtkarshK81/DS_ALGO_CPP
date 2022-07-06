/*
Inversion Count for an array indicates – how far (or close) the array is from being sorted.
If the array is already sorted, then the inversion count is 0, but if the array is sorted
in the reverse order, the inversion count is the maximum.
Two elements a[i] and a[j] form an inversion if a[i] > a[j] for i < j
*/

#include <iostream>
using namespace std;

// Simple Solution-->TC=O(n^2) & SC=O(1)
long countInversions(int arr[], int size)
{
    long count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    return count;
}
// Enhance MergeSort
long long merge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 and j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}
long long mergeSort(int arr[], int l, int r)
{
    long long inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
}
//
int main()
{
    int size;
    cin >> size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Number of inversions for the given array : " << countInversions(arr, size) << endl;

    cout << "Number of inversions found recursively for the given array: " << mergeSort(arr, 0, size - 1);
    return 0;
}