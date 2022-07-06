#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Now make sure elements to the left<pivot and towards right>pivot
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < arr[pivotIndex])
        {
            i++;
        }
        while (arr[j] > arr[pivotIndex])
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1); // sort left part
    quickSort(arr, p + 1, e); // sort right part
}

int main()
{
    int arr[7] = {-1, 10, 2, 3, 21, -5, 4};

    cout << "Array elements before quick Sort: " << endl;
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
    quickSort(arr, 0, 6);
    cout << "Array elements after quick Sort: " << endl;
    for (int element : arr)
    {
        cout << element << " ";
    }
    return 0;
}