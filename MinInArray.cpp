#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int maximum = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        maximum = max(maximum, arr[i]);
        // if (arr[i] > max)   //We already have a function max() & min()
        //{
        //  max = arr[i];
        //}
    }
    return maximum;
}
int getMin(int arr[], int size)
{
    int minimum = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        minimum = min(minimum, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return minimum;
}

int main()
{
    int numberOfElements;
    cout << "Enter the number of elements: " << endl;
    cin >> numberOfElements;

    int givenArray[10];
    cout << "Enter the array elements : " << endl;
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> givenArray[i];
    }
    cout << "Largest value :" << getMax(givenArray, numberOfElements) << endl;
    cout << "Smallest value :" << getMin(givenArray, numberOfElements);
    return 0;
}