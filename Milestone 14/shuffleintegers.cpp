#include<bits/stdc++.h>
using namespace std;

void shuffleArray(int arr[],int n)
	{
	    vector<int> v;
	    int start=n/2;
	    int e=start;
	    int i=0,j=0;
	    while(i!=n)
	    {
	        if(i%2==0 && j<e)
	            v.push_back(arr[j++]);
	        else
	            v.push_back(arr[start++]);
	        ++i;
	    }
	    for(int i=0;i<n;++i)
	        arr[i]=v[i];
	       if(n%2!=0)
	        arr[n-1]=0;
	}