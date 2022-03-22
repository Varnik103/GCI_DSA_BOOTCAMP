#include<iostream>
using namespace std;

int power(int a,int b){
    if(b==0)
        return 1;
    return a*power(a,b-1);
}

int main(){
    int a,b;
    cout<<"Input the base value :";
    cin>>a;
    cout<<"Input the value of power :";
    cin>>b;
    cout<<"The ans is "<<power(a,b);
}