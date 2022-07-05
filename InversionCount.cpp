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
int main()
{
    int size;
    cin >> size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Number of inversions for the given array : " << countInversions(arr, size);
    return 0;
}