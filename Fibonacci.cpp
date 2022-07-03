#include<iostream>
using namespace std;

void printFibonacci(int n){
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int sum=a+b;
        cout<<sum<<" ";
        a=b;        //UPDATE VALUES OF a & b as b & sum respectively
        b=sum;
    }
}
//Print nth number in Fibonacci Series using recursion
int fib(int num){
    if(num==0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    return fib(num-1)+fib(num-2);
}

int main(){
    int N;
    cin>>N;
    printFibonacci(N);

    cout<<endl<<fib(11);
    return 0;
}