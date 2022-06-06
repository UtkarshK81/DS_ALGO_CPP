#include<iostream>
using namespace std;

void reverseString(char name[],int length){
    int start=0;
    int end=length-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}

int main(){

    char name[20];
    cout<<"Enter any string: ";
    cin>>name;
    int length=0;
    for(int i=0;name[i]!='\0';i++){
        length++;
    }
    reverseString(name, length);

    cout<<"String after reversal: "<<name;
    return 0;
}