#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>& v,int temp){
    if(v.size()==0 || v[v.size()-1]<temp){
        v.push_back(temp);
        return;
    }
    int x=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(x);
}

void sort(vector<int> &v){
    if(v.size()<=1)
        return;
    int temp=v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,temp);
}

int main(){
    int n;
    cout<<"Enter the number of elements "<<endl;
    cin>>n;
    vector<int> v;
    cout<<"Enter the array elements"<<endl;
    for(int  i=0;i<n;++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Array before sorting"<<endl;
    for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";
    cout<<endl;
    sort(v);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";
}