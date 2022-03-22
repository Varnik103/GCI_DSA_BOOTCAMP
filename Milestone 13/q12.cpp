#include<iostream>
using namespace std;

bool prime(int n,int i){
    if(i==n)
        return true;
    if(n%i==0)
        return false;
    return prime(n,i+1);
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(prime(n,2))
        cout<<n<<" is a prime number";
    else
        cout<<n<<" is not a prime number";
}