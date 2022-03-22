#include<iostream>
using namespace std;

void seq(int n,int &count){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    count++;
    if(n%2==0)
        seq(n/2,count);
    else
        seq(3*n+1,count);
}

int main(){
    int n;
    cout<<"Input any number (positive) to start for Hailstone Sequence : ";
    cin>>n;
    cout<<"The hailstone sequence starting at "<<n<<" is : ";
    int count=1;
    seq(n,count);
    cout<<endl;
    cout<<"The length of the sequence is "<<count;
}