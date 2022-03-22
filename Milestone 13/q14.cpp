#include<iostream>
using namespace std;

void print(int n,int i){
    if(i>n)
        return;
    cout<<i<<" ";
    print(n,i+2);
}

int main(){
    int n;
    cout<<"Input the range to print startig from 1:";
    cin>>n;
    cout<<"All even numbers from 1 to "<<n<<" are :";
    print(n,2);
    cout<<endl;
    cout<<"All odd numbers from 1 to "<<n<<" are :";
    print(n,1);
}