#include<iostream>
#include<vector>
using namespace std;

bool checkIfRotatedAndSorted(vector<int> &arr){
    int pairCount=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]>arr[i]){
            pairCount++;
        }
        if(arr[arr.size()-1]>arr[0]){
            pairCount++;
        }
    }
    return pairCount<=1;
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
    cout<<checkIfRotatedAndSorted(arr);
    return 0;
}