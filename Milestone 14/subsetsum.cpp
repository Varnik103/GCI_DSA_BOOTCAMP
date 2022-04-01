#include<bits/stdc++.h>
using namespace std;

vector<int> helper(vector<int> arr,int n,vector<int> output){
        vector<int> ans;
        if(n==0){
            int sum=0;
            for(int i=0;i<output.size();++i)
                sum+=output[i];
            ans.push_back(sum);
            return ans;
        }
        vector<int> exclude=helper(arr,n-1,output);
        output.push_back(arr[n-1]);
        vector<int> include=helper(arr,n-1,output);
        for(int i=0;i<exclude.size();++i)
            ans.push_back(exclude[i]);
        for(int i=0;i<include.size();++i)
            ans.push_back(include[i]);
        return ans;
    }

    vector<int> subsetSums(vector<int> arr, int N){
        sort(arr.begin(),arr.end());
        vector<int> output;
        return helper(arr,N,output);
    }

int main(){
    int n;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    vector<int> arr;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int> ans=subsetSums(arr,n);
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";
}