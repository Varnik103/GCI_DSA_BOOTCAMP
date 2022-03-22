#include<iostream>
using namespace std;

int sum(int num){
    if(num==1)
        return 1;
    return num+sum(num-1);
}

int main(){
    cout<<"Input the last number of the range starting from 1 :";
    int n;
    cin>>n;
    cout<<"The sum of numbers from 1 to 5 :"<<sum(n);
}