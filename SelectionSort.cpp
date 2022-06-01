#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)      //Number of rounds
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
    int arr[50];
    cout << "Enter the array elements :" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, N);
    cout << "Array elements after sorting:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}