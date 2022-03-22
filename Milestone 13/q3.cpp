#include<iostream> 
using namespace std;

void fibonacci(int a,int b,int n){
    if(n==0)
        return;
    cout<<a+b<<" ";
    fibonacci(b,a+b,n-1);
}

int main(){
    cout<<"Input number of terms for the Series (< 20) :";
    int n;
    cin>>n;
    cout<<"The Series are : "<<endl;
    cout<<1<<" "<<1<<" ";
    fibonacci(1,1,n-2);
}