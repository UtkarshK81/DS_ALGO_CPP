#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWordsInAString(string a){
    int l,r=0;
    while(l<a.length()){
        while(r<a.length() && a[r]!=' '){
            r++;
        }
        reverse(a.begin()+l,a.begin()+r);
        l=r+1;
        r=l;
    }
    return a;
}

int main(){
    string s;
    getline(cin,s);
    cout<<reverseWordsInAString(s);
    return 0;
}