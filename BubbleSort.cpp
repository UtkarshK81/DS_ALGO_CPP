#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    bubbleSort(arr, N);
    cout << "Array elements after sorting:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}