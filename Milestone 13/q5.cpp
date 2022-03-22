#include<iostream>
using namespace std;

int count(int n){
    if(n==0)
        return 0;
    return 1+count(n/10);
}

int main(){
    int n;cout<<"Input a number:";
    cin>>n;
    cout<<"The number of digits in the number is :"<<count(n);
}