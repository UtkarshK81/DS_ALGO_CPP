#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int size;
    cin >> size;

    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swapAlternate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}