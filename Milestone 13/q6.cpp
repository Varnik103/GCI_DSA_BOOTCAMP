#include<iostream>
using namespace std;

int sum(int n){
    if(n==0)
        return 0;
    return n%10+sum(n/10);
}

int main(){
    int n;
    cout<<"Input any number tofind sum of digits:";
    cin>>n;
    cout<<"The sum of digits of "<<n<<" = "<<sum(n);
}