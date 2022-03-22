#include<iostream>
using namespace std;

bool search(int *arr,int st,int ed,int x){
    if(st>ed)
        return false;
    int mid=(st+ed)/2;
    if(arr[mid]==x)
        return true;
    if(arr[mid]<x)
        return search(arr,mid+1,ed,x);
    else
        return search(arr,st,mid-1,x);
}

int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int x;
    cout<<"Enter the number to be searched in the array"<<endl;
    cin>>x;
    if(search(arr,0,n-1,x))
        cout<<"Found";
    else
        cout<<"Not Found";
    delete [] arr;   
}