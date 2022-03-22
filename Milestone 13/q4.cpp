#include<iostream>
using namespace std;

void print(int *arr,int n){
    if(n==0)
        return;
    cout<<arr[0]<<" ";
    print(arr+1,n-1);
}

int main(){
    cout<<"Input the number of elements to be stored in the array :";
    int n;
    cin>>n;
    int* arr=new int[n];
    cout<<"Input "<<n<<" elements in the array :"<<endl;
    for(int i=0;i<n;++i){
        cout<<"element - "<<i<<":";
        cin>>arr[i];
    }
    cout<<"The elements in the array are :";
    print(arr,n);
    delete [] arr;
}