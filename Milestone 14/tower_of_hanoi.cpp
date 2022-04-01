#include<bits/stdc++.h>
using namespace std;

void tower(int n,char source,char intermediate,char dest){
    if(n==0)
        return;
    tower(n-1,source,dest,intermediate);
    cout<<source<<" "<<dest<<endl;
    tower(n-1,intermediate,source,dest);
}

int main(){
    int n;
    cout<<"Enter the number of disks"<<endl;
    cin>>n;
    tower(n,'a','b','c');
}