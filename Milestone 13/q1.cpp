#include<iostream>
using namespace std;

void print(int n){
    if(n==51){
        return;
    }
    cout<<n<<" ";
    print(n+1);
}

int main(){
    cout<<"The natural numbers are: ";
    print(1);
}