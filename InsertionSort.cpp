#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0 && (temp < arr[j]); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
    int arr[20];
    cout << "Enter the array elements :" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, N);
    cout << "Array elements after sorting:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}