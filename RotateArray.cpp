#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int> &nums, int k){
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
}
void displayElements(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int N,k;
    cout<<"Enter the number of elements: ";
    cin>>N;
    vector<int> numbers;
    int input;
    for(int i=0;i<N;i++){
        cin>>input;
        numbers.push_back(input);
    }
    cout<<"Enter the value of k: ";
    cin>>k;
    rotateArray(numbers,k);
    displayElements(numbers);
    return 0;
}