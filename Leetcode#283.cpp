// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

#include<iostream>
#include<vector>
using namespace std;

void moveZerosToEnd(vector<int> &arr){
    int nonZeroIndex=0;
    for(int j=0;j<arr.size();j++){
        if(arr[j]!=0){
            swap(arr[j],arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}
void displayElements(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cin>>size;
    vector<int> arr;
    cout<<"Enter the array elements : ";
    int input;
    for(int i=0;i<size;i++){
        cin>>input;
        arr.push_back(input);
    }
    moveZerosToEnd(arr);
    displayElements(arr);
    return 0;
}