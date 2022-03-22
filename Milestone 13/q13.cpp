#include<iostream>
using namespace std;

int lcm(int a,int b,int i){
    if(a%i==0 && b%i==0)
        return i;
    return lcm(a,b,i+b);
}

int main(){
    int n1,n2;
    cout<<" Enter first number ";
    cin>>n1;
    cout<<"ENter second number ";
    cin>>n2;
    cout<<"The LCM of "<<n1<<" and "<<n2<<" :";
    if(n1>n2)
        cout<<lcm(n1,n2,2);
    else
        cout<<lcm(n2,n1,2);
}