#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
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
    cout << "Enter the key to be searched : " << endl;
    cin >> key;
    if (linearSearch(arr, size, key))
    {
        cout << key << " is present" << endl;
    }
    else
    {
        cout << key << " is absent" << endl;
    }
    return 0;
}