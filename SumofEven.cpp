#include<iostream>
using namespace std;
int main(){
    int N,sum=0,i=0;
    cin>>N;
    while (i<=N)
    {
        sum+=i;
        i=i+2;
    }
    cout<<"Sum of even numbers till "<<N<<" is "<<sum;
    return 0;
}