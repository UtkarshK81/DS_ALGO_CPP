/*Given an array of integers nums sorted in non-decreasing order,
find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int start=0,end=nums.size()-1;
    vector<int> result;
    result.push_back(-1);
    result.push_back(-1);
    int mid=start+(end-start)/2;

    while(start<=end){
        if(target==nums[mid]){
            result[0]=mid;
            end=mid-1;
        }
        else if(target>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    start=0,end=nums.size()-1;
    while(start<=end){
        if(target==nums[mid]){
            result[1]=mid;
            start=mid+1;
        }
        else if(target>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return result;
}
int main()
{
    int size,element;
    cin>>size;
    vector<int> nums;
    for(int i=0;i<size;i++){
        cin>>element;
        nums.push_back(element);
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    cout<<"First and last index of ";
    for(int element: searchRange(nums,target)){
        cout<<endl<<element<<endl;
    }
    return 0;
}