#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start=0, end=n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arraySize;
    cin >> arraySize;

    int array[10];
    cout << "Enter array elements : " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }
    reverseArray(array,arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i]<<" ";
    }
    return 0;
}