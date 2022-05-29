#include<iostream>
using namespace std;

long long int binarySearch(int n){
    int start=0,end=n;
    long long int ans;
    while(start<end){
        long long int mid=start+(end-start)/2;
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square>n){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int N;
    cin>>N;
    cout<<binarySearch(N);
    return 0;
}