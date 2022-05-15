#include<iostream>
using namespace std;

void printFibonacci(int n){
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        int sum=a+b;
        cout<<sum<<" ";
        a=b;        //UPDATE VALUES OF a & b as b & sum respectively
        b=sum;
    }
}

int main(){
    int N;
    cin>>N;
    printFibonacci(N);
    return 0;
}