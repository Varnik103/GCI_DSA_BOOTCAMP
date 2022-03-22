#include<iostream>
using namespace std;

int findGCD(int a,int b)
{
     while(a!=b)
     {
          if(a>b)
              return findGCD(a-b,b);
          else
             return findGCD(a,b-a);
     }
     return a;
}

int main(){
    int num1,num2;
    cout<<"Input 1st number: ";
    cin>>num1;
    cout<<"Input 2nd number: ";
    cin>>num2;
    cout<<"The GCD of "<<num1<<" and "<<num2<<" is:";
    cout<<findGCD(num1,num2);
    // cout<<ans;
}