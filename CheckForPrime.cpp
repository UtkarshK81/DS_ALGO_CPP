#include<iostream>
using namespace std;

void isPrime(int N){
    int i=2;
    bool isPrime=1;
    while(i<N){
        if(N%i==0){
            isPrime=0;
            break;
        }
        i=i+1;
    }
    if(isPrime==0){
        cout<<N<<" is not a prime number"<<endl;
    }else{
        cout<<N<<" is a prime number";
    }
}

int main(){
    int N;
    cin>>N;
    isPrime(N);
    return 0;
}