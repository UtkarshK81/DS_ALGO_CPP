#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

// Recursive Solution
int binarySearchRecursiveSolution(int start, int end, int key, int arr[])
{
    // BASE CASE
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (key == arr[mid])
    {
        return mid;
    }
    if (key > arr[mid])
    {
        return binarySearchRecursiveSolution(mid + 1, end, key, arr);
    }
    else
    {
        return binarySearchRecursiveSolution(start, mid - 1, key, arr);
    }
}

int main()
{
    int size, key;
    cin >> size;

    int arr[10];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched :" << endl;
    cin >> key;
    cout << key << " found at index: " << binarySearch(arr, size, key) << endl;

    cout << key << " found at index: " << binarySearchRecursiveSolution(0, size - 1, key, arr) << " using recursion";
    return 0;
}