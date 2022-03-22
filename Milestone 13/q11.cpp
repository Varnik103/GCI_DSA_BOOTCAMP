#include<iostream>
using namespace std;

int binary(int n){
    if(n<=0)
        return 0;
    return n%2 + 10*binary(n/2);
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"The Binary value of decimal no. "<<n<<" is : "<<binary(n);
}