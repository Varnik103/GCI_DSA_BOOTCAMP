#include<iostream>
#include<climits>
using namespace std;

int maxi(int *arr,int n){
    if(n==0)
        return INT_MIN;
    return max(arr[0],maxi(arr+1,n-1));
}

int main(){
    int n;
    cout<<"Input the number of elements "<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    cout<<maxi(arr,n);
    delete [] arr;
}